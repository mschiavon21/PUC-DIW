#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include "Extra_class.hpp"

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

//=====================================================

void extra_01()
{
    int n, inf, sup;
    bool z;

    cout << "Insira a quantidade: ";
    cin >> n;

    Array<int> array1(n, 0);
    Array<int> array2(n, 0);

    cout << "Insira um valor para o limite inferior: ";
    cin >> inf;

    cout << "Insira um valor para o limite superior: ";
    cin >> sup;

    array1.random_number(inf, sup);
    array2.choose(inf, sup);

    cout << "\nArray 1:\n";
    array1.print();

    cout << "\nArray 2:\n";
    array2.print();

    z = array1.different(array1, array2);

    cout << "\nAs arrays sao iguais: "
         << z << endl;

    pause("Aperte ENTER para continuar");
}

//=====================================================

void extra_02()
{
    int n, inf, sup;
    int z;

    cout << "Insira a quantidade: ";
    cin >> n;

    Array<int> array1(n, 0);
    Array<int> array2(n, 0);

    cout << "Insira um valor para o limite inferior: ";
    cin >> inf;

    cout << "Insira um valor para o limite superior: ";
    cin >> sup;

    array1.random_number(inf, sup);
    array2.choose(inf, sup);

    cout << "\nArray 1:\n";
    array1.print();

    cout << "\nArray 2:\n";
    array2.print();

    z = array1.differences(array1, array2);

    cout << "\nQuantidade de diferencas: "
         << z << endl;

    pause("Aperte ENTER para continuar");
}