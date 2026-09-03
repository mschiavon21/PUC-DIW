#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

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
    T **data;
    int rows;
    int columns;
    T optional;

public:
    matrix()
    {
        data = nullptr;
        rows = 0;
        columns = 0;
        optional = T();
    }

    matrix(int i, int j, T initial)
    {
        optional = initial;
        rows = i;
        columns = j;

        data = new T *[rows];

        for (int x = 0; x < rows; x++)
        {
            data[x] = new T[columns];

            for (int y = 0; y < columns; y++)
            {
                data[x][y] = initial;
            }
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
            cout << "Posicao invalida!" << endl;
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
            cout << "Posicao invalida!" << endl;
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

    void generaterandom(int inf, int sup)
    {
        srand(time(nullptr));

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                data[x][y] =
                    inf + rand() % (sup - inf + 1);
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

    void freadmatrix(string fileName)
    {
        ifstream afile(fileName);

        int m, n;
        afile >> m >> n;

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

        data = new T *[rows];

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

    matrix<T> &operator=(const matrix<T> &other)
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

            data = new T *[rows];

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

    void multiply(int n)
    {
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                data[x][y] *= n;
            }
        }
    }

    bool isidentity()
    {
        if (rows != columns)
            return false;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (x == y)
                {
                    if (data[x][y] != 1)
                        return false;
                }
                else
                {
                    if (data[x][y] != 0)
                        return false;
                }
            }
        }

        return true;
    }

    bool operator==(const matrix<T> &other)
    {
        if (rows != other.rows ||
            columns != other.columns)
        {
            return false;
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (data[x][y] != other.data[x][y])
                    return false;
            }
        }

        return true;
    }

    int addmatrix(const matrix<T> &other)
    {
        int soma = 0;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                soma += data[x][y] + other.data[x][y];
            }
        }

        return soma;
    }

    void addrows(int row1, int row2, int n)
    {
        if (row1 >= 0 && row1 < rows &&
            row2 >= 0 && row2 < rows)
        {
            for (int y = 0; y < columns; y++)
            {
                data[row1][y] =
                    (data[row1][y] + data[row2][y]) * n;
            }
        }
    }

    void subtractrows(int row1, int row2, int n)
    {
        if (row1 >= 0 && row1 < rows &&
            row2 >= 0 && row2 < rows)
        {
            for (int y = 0; y < columns; y++)
            {
                data[row1][y] =
                    (data[row1][y] - data[row2][y]) * n;
            }
        }
    }

    int searchrows(int n)
    {
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (data[x][y] == n)
                    return x;
            }
        }

        return -1;
    }

    int searchcolumns(int n)
    {
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (data[x][y] == n)
                    return y;
            }
        }

        return -1;
    }

    void transpose()
    {
        if (rows != columns)
        {
            cout << "A matriz nao e quadrada." << endl;
            return;
        }

        for (int x = 0; x < rows; x++)
        {
            for (int y = x + 1; y < columns; y++)
            {
                T temp = data[x][y];
                data[x][y] = data[y][x];
                data[y][x] = temp;
            }
        }
    }
};

#endif