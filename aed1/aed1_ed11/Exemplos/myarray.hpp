#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

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
class Array
{
private:
    T optional;
    int length;
    T* data;

public:

    //====================================================
    // Construtor padrão
    Array()
    {
        optional = T();
        length = 0;
        data = nullptr;
    }

    //====================================================
    // Construtor
    Array(int n, T initial)
    {
        optional = initial;
        length = n;

        if (n > 0)
            data = new T[n];
        else
        {
            length = 0;
            data = nullptr;
        }
    }

    //====================================================
    // Construtor usando vetor
    Array(int n, int other[])
    {
        optional = T();

        if (n > 0)
        {
            length = n;
            data = new T[length];

            for (int i = 0; i < length; i++)
                data[i] = other[i];
        }
        else
        {
            length = 0;
            data = nullptr;
        }
    }

    //====================================================
    // Construtor de cópia
    Array(const Array<T>& other)
    {
        optional = other.optional;
        length = other.length;

        if (length > 0)
        {
            data = new T[length];

            for (int i = 0; i < length; i++)
                data[i] = other.data[i];
        }
        else
        {
            data = nullptr;
        }
    }

    //====================================================
    // Destrutor
    ~Array()
    {
        free();
    }

    //====================================================
    void free()
    {
        if (data != nullptr)
        {
            delete[] data;
            data = nullptr;
        }

        length = 0;
    }

    //====================================================
    void set(int position, T value)
    {
        if (0 <= position && position < length)
            data[position] = value;
    }

    //====================================================
    T get(int position)
    {
        T value = optional;

        if (0 <= position && position < length)
            value = data[position];

        return value;
    }

    //====================================================
    int getlength() const
    {
        return length;
    }

    //====================================================
    void print()
    {
        cout << endl;

        for (int i = 0; i < length; i++)
        {
            cout << setw(3)
                 << i
                 << ":"
                 << setw(9)
                 << data[i]
                 << endl;
        }

        cout << endl;
    }

    //====================================================
    void read()
    {
        cout << endl;

        for (int i = 0; i < length; i++)
        {
            cout << setw(3) << i << ": ";
            cin >> data[i];
        }
    }

    //====================================================
    void fprint(string fileName)
    {
        ofstream afile(fileName);

        afile << length << endl;

        for (int i = 0; i < length; i++)
            afile << data[i] << endl;

        afile.close();
    }

    //====================================================
    void fread(string fileName)
    {
        ifstream afile(fileName);

        int n;
        afile >> n;

        if (n > 0)
        {
            free();

            length = n;
            data = new T[length];

            for (int i = 0; i < length; i++)
                afile >> data[i];
        }

        afile.close();
    }

    //====================================================
    Array<T>& operator=(const Array<T>& other)
    {
        if (this != &other)
        {
            free();

            optional = other.optional;
            length = other.length;

            if (length > 0)
            {
                data = new T[length];

                for (int i = 0; i < length; i++)
                    data[i] = other.data[i];
            }
        }

        return *this;
    }

    //====================================================
    bool operator==(const Array<T>& other)
    {
        if (length != other.length)
            return false;

        for (int i = 0; i < length; i++)
        {
            if (data[i] != other.data[i])
                return false;
        }

        return true;
    }

    //====================================================
    Array<T> operator+(const Array<T>& other)
    {
        Array<T> result(*this);

        if (length == other.length)
        {
            for (int i = 0; i < length; i++)
                result.data[i] += other.data[i];
        }
        else
        {
            cout << "Tamanhos diferentes!" << endl;
        }

        return result;
    }

    //====================================================
    T& operator[](int position)
    {
        if (position < 0 || position >= length)
        {
            cout << "Posicao invalida!" << endl;
            return data[0];
        }

        return data[position];
    }
};

#endif