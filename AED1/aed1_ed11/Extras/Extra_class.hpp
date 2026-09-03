#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

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
class Array
{
private:
    T optional;
    int length;
    T* data;

public:
    Array(int n, T initial)
    {
        optional = initial;
        length = 0;
        data = nullptr;

        if (n > 0)
        {
            length = n;
            data = new T[length];
        }
    }

    ~Array()
    {
        free();
    }

    void free()
    {
        if (data != nullptr)
        {
            delete[] data;
            data = nullptr;
            length = 0;
        }
    }

    void set(int position, T n)
    {
        if (0 <= position && position < length)
        {
            data[position] = n;
        }
    }

    T get(int position)
    {
        T value = optional;

        if (0 <= position && position < length)
        {
            value = data[position];
        }

        return value;
    }

    int getlength() const
    {
        return length;
    }

    void random_number(int inf, int sup)
    {
        srand(time(NULL));

        for (int x = 0; x < length; x++)
        {
            data[x] = inf + rand() % (sup - inf + 1);
        }
    }

    void print()
    {
        cout << endl;

        for (int x = 0; x < length; x++)
        {
            cout << "[" << x << "] : " << data[x] << endl;
        }

        cout << endl;
    }

    bool different(const Array<T>& array1, const Array<T>& array2)
    {
        if (array1.length != array2.length)
        {
            return false;
        }

        for (int x = 0; x < array1.length; x++)
        {
            if (array1.data[x] != array2.data[x])
            {
                return false;
            }
        }

        return true;
    }

    int differences(const Array<T>& array1, const Array<T>& array2)
    {
        if (array1.length != array2.length)
        {
            cout << "Tamanhos diferentes de array" << endl;
            return -1;
        }

        int z = 0;

        for (int x = 0; x < array1.length; x++)
        {
            if (array1.data[x] != array2.data[x])
            {
                z++;
            }
        }

        return z;
    }

    void choose(int inf, int sup)
    {
        for (int y = 0; y < length; y++)
        {
            int x;

            do
            {
                cout << "Escolha um valor entre ["
                     << inf << "," << sup
                     << "] [" << y << "]: ";

                cin >> x;

            } while (x < inf || x > sup);

            data[y] = x;
        }
    }
};

#endif