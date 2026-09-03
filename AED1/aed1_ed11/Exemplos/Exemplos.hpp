#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include "myarray.hpp"

using namespace std;

void pause(string text)
{
    string dummy;
    cin.clear();
    cout << endl << text;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, dummy);
    cout << endl << endl;
}

//=========================================================

void example_01()
{
    Array<int> int_array(5, 0);

    int_array.set(0, 1);
    int_array.set(1, 2);
    int_array.set(2, 3);
    int_array.set(3, 4);
    int_array.set(4, 5);

    cout << "\nExample_01\n";
    int_array.print();

    int_array.free();
    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_02()
{
    Array<int> array(5, 0);

    cout << "\nExample_02\n";

    array.read();
    array.print();

    array.free();
    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_03()
{
    Array<int> array(5, 0);

    array.read();
    array.print();
    array.fprint("DADOS1.TXT");

    array.free();
    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_04()
{
    Array<int> array(5, 0);

    array.fread("DADOS1.TXT");
    array.print();

    array.free();
    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_05()
{
    int other[] = {1, 2, 3, 4, 5};

    Array<int> array(5, other);

    array.print();

    array.free();
    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_06()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");
    array.print();

    Array<int> array2(array);

    array2.print();

    array.free();
    array2.free();

    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_07()
{
    Array<int> array(1, 0);
    Array<int> array2(1, 0);

    array.fread("DADOS1.TXT");
    array.print();

    array2 = array;
    array2.print();

    array.free();
    array2.free();

    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_08()
{
    int other[] = {1, 2, 3};

    Array<int> int_array(3, other);
    Array<int> int_array2(3, other);

    cout << "Array\n";
    int_array.print();

    cout << "Array2\n";
    int_array2.print();

    cout << "Igualdade = "
         << (int_array == int_array2)
         << endl;

    int_array2.set(0, -1);

    cout << "\nArray\n";
    int_array.print();

    cout << "Array2\n";
    int_array2.print();

    cout << "Igualdade = "
         << (int_array == int_array2)
         << endl;

    int_array.free();
    int_array2.free();

    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_09()
{
    Array<int> array1(1, 0);
    Array<int> array2(1, 0);
    Array<int> array3(1, 0);

    array1.fread("DADOS1.TXT");

    array2 = array1;
    array3 = array2 + array1;

    cout << "\nOriginal\n";
    array1.print();

    cout << "Copia\n";
    array2.print();

    cout << "Soma\n";
    array3.print();

    array1.free();
    array2.free();
    array3.free();

    pause("Aperte ENTER para continuar");
}

//=========================================================

void example_10()
{
    int other[] = {1, 2, 3, 4, 5};

    Array<int> array(5, other);

    for (int x = 0; x < array.getlength(); x++)
    {
        cout << endl
             << setw(3)
             << x
             << ": "
             << array[x];
    }

    cout << endl
         << "[-1]: "
         << array.get(-1)
         << endl;

    cout << "["
         << array.getlength()
         << "]: "
         << array[array.getlength()]
         << endl;

    array.free();

    pause("Aperte ENTER para continuar");
}