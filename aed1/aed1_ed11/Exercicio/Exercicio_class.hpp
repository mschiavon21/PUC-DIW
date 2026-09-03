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
    T *data;

public:
    Array()
    {
        optional = T();
        length = 0;
        data = nullptr;
    }

    Array(int n, T initial)
    {
        optional = initial;

        if (n > 0)
        {
            length = n;
            data = new T[length];
        }
        else
        {
            length = 0;
            data = nullptr;
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
        }

        length = 0;
    }

    void set(int position, T value)
    {
        if (0 <= position && position < length)
        {
            data[position] = value;
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

    int getlength()
    {
        return length;
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

    void random_number(int inf, int sup)
    {
        srand(time(NULL));

        for (int x = 0; x < length; x++)
        {
            data[x] = inf + rand() % (sup - inf + 1);
        }
    }

    void fprint(string fileName)
    {
        ofstream afile(fileName);

        afile << length << endl;

        for (int x = 0; x < length; x++)
        {
            afile << data[x] << endl;
        }

        afile.close();
    }

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

            for (int x = 0; x < length; x++)
            {
                afile >> data[x];
            }
        }

        afile.close();
    }

    T search_even()
    {
        T maior = optional;
        bool achou = false;

        for (int x = 0; x < length; x++)
        {
            if (data[x] % 2 == 0)
            {
                if (!achou || data[x] > maior)
                {
                    maior = data[x];
                    achou = true;
                }
            }
        }

        return maior;
    }

    T search_even5()
    {
        T maior = optional;
        bool achou = false;

        for (int x = 0; x < length; x++)
        {
            if (data[x] % 2 == 0 && data[x] % 5 == 0)
            {
                if (!achou || data[x] > maior)
                {
                    maior = data[x];
                    achou = true;
                }
            }
        }

        return maior;
    }

    T sum_array(int inf, int sup)
    {
        T soma = 0;

        for (int x = inf; x <= sup; x++)
        {
            soma += data[x];
        }

        return soma;
    }

    T avg_array(int inf, int sup)
    {
        T soma = sum_array(inf, sup);

        return soma / (sup - inf + 1);
    }

    bool positive()
    {
        for (int x = 0; x < length; x++)
        {
            if (data[x] < 0 || data[x] > 100)
            {
                return false;
            }
        }

        return true;
    }

    int getlength(string fileName)
    {
        int x = 0;

        ifstream afile(fileName);

        afile >> x;

        afile.close();

        return x;
    }

    bool is_decrescent()
    {
        for (int x = 0; x < length - 1; x++)
        {
            if (data[x] <= data[x + 1])
            {
                return false;
            }
        }

        return true;
    }

    bool search_array(int num, int inf, int sup)
    {
        for (int x = inf; x <= sup; x++)
        {
            if (data[x] == num)
            {
                return true;
            }
        }

        return false;
    }

    T multiply_array(int inf, int sup, int k)
    {
        T soma = 0;

        for (int x = inf; x <= sup; x++)
        {
            soma += k * data[x];
        }

        return soma;
    }

    void sort_array_down()
    {
        for (int x = 0; x < length - 1; x++)
        {
            for (int y = 0; y < length - 1 - x; y++)
            {
                if (data[y] < data[y + 1])
                {
                    T temp = data[y];
                    data[y] = data[y + 1];
                    data[y + 1] = temp;
                }
            }
        }
    }
};

#endif