#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ofstream;
using std::ifstream;

template <typename T>
class matrix
{
private:
    T** data;
    int rows;
    int columns;
    T optional;

public:
    matrix()
    {
        rows = 0;
        columns = 0;
        optional = T();
        data = nullptr;
    }

    matrix(int i, int j, T initial)
    {
        optional = initial;
        rows = i;
        columns = j;

        if (rows > 0 && columns > 0)
        {
            data = new T*[rows];

            for (int x = 0; x < rows; x++)
            {
                data[x] = new T[columns];

                for (int y = 0; y < columns; y++)
                {
                    data[x][y] = initial;
                }
            }
        }
        else
        {
            rows = 0;
            columns = 0;
            data = nullptr;
        }
    }

    ~matrix()
    {
        if (data != nullptr)
        {
            for (int x = 0; x < rows; x++)
            {
                delete[] data[x];
            }

            delete[] data;
            data = nullptr;
        }
    }

    void set(int row, int column, T value)
    {
        if (row < 0 || row >= rows ||
            column < 0 || column >= columns)
        {
            cout << "ERRO: Posicao invalida!" << endl;
        }
        else
        {
            data[row][column] = value;
        }
    }

    T get(int row, int column)
    {
        T value = optional;

        if (row < 0 || row >= rows ||
            column < 0 || column >= columns)
        {
            cout << "ERRO: Posicao invalida!" << endl;
        }
        else
        {
            value = data[row][column];
        }

        return value;
    }

    void print()
    {
        cout << endl;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                cout << data[x][y] << "\t";
            }
            cout << endl;
        }
    }

    void read()
    {
        cout << endl;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                cout << setw(2)
                     << x << ","
                     << setw(2)
                     << y << ": ";

                cin >> data[x][y];
            }
        }
    }

    void fprint(string fileName)
    {
        ofstream afile(fileName);

        afile << rows << endl;
        afile << columns << endl;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                afile << data[x][y] << endl;
            }
        }

        afile.close();
    }

    void fread(string fileName)
    {
        ifstream afile(fileName);

        int m, n;

        afile >> m;
        afile >> n;

        if (m <= 0 || n <= 0)
        {
            cout << "Tamanho invalido!" << endl;
            return;
        }

        if (data != nullptr)
        {
            for (int x = 0; x < rows; x++)
            {
                delete[] data[x];
            }
            delete[] data;
        }

        rows = m;
        columns = n;

        data = new T*[rows];

        for (int x = 0; x < rows; x++)
        {
            data[x] = new T[columns];
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                afile >> data[x][y];
            }
        }

        afile.close();
    }

    matrix<T>& operator=(const matrix<T>& other)
    {
        if (this != &other)
        {
            if (data != nullptr)
            {
                for (int x = 0; x < rows; x++)
                {
                    delete[] data[x];
                }
                delete[] data;
            }

            rows = other.rows;
            columns = other.columns;
            optional = other.optional;

            data = new T*[rows];

            for (int x = 0; x < rows; x++)
            {
                data[x] = new T[columns];

                for (int y = 0; y < columns; y++)
                {
                    data[x][y] = other.data[x][y];
                }
            }
        }

        return *this;
    }

    bool isZeros()
    {
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (data[x][y] != 0)
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool operator!=(const matrix<T>& other)
    {
        if (rows != other.rows ||
            columns != other.columns)
        {
            return true;
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (data[x][y] != other.data[x][y])
                {
                    return true;
                }
            }
        }

        return false;
    }

    matrix<T> operator-(const matrix<T>& other)
    {
        matrix<T> result(rows, columns, 0);

        if (rows != other.rows ||
            columns != other.columns)
        {
            cout << "Dimensoes incompativeis!" << endl;
            return result;
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                result.data[x][y] =
                    data[x][y] - other.data[x][y];
            }
        }

        return result;
    }

    matrix<T> operator*(const matrix<T>& other)
    {
        matrix<T> result(rows, other.columns, 0);

        if (columns != other.rows)
        {
            cout << "Dimensoes incompativeis!" << endl;
            return result;
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < other.columns; y++)
            {
                T sum = 0;

                for (int z = 0; z < columns; z++)
                {
                    sum += data[x][z] *
                           other.data[z][y];
                }

                result.data[x][y] = sum;
            }
        }

        return result;
    }

    int getrows() const
    {
        return rows;
    }

    int getcolumns() const
    {
        return columns;
    }
};

#endif