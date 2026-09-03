#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include "Exercicio_class.hpp"

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

//========================================================

void method_01()
{
    int n, inf, sup;

    cout << "Insira a quantidade: ";
    cin >> n;

    Array<int> array(n, 0);

    cout << "Insira um valor para o limite inferior: ";
    cin >> inf;

    cout << "Insira um valor para o limite superior: ";
    cin >> sup;

    array.random_number(inf, sup);
    array.fprint("DADOS1.TXT");

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_02()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    cout << "Maior valor par: "
         << array.search_even()
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_03()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    cout << "Maior valor par e multiplo de 5: "
         << array.search_even5()
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_04()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    int limite = array.getlength();
    int inf, sup;

    cout << "Limite inferior [0," << limite - 1 << "]: ";
    cin >> inf;

    cout << "Limite superior [" << inf << ","
         << limite - 1 << "]: ";
    cin >> sup;

    cout << "Soma = "
         << array.sum_array(inf, sup)
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_05()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    int limite = array.getlength();
    int inf, sup;

    cout << "Limite inferior [0," << limite - 1 << "]: ";
    cin >> inf;

    cout << "Limite superior [" << inf << ","
         << limite - 1 << "]: ";
    cin >> sup;

    cout << "Media = "
         << array.avg_array(inf, sup)
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_06()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    cout << "Todos os valores estao entre 0 e 100: "
         << array.positive()
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_07()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    cout << "Esta em ordem decrescente: "
         << array.is_decrescent()
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_08()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    int limite = array.getlength();
    int inf, sup, num;

    cout << "Limite inferior [0," << limite - 1 << "]: ";
    cin >> inf;

    cout << "Limite superior [" << inf << ","
         << limite - 1 << "]: ";
    cin >> sup;

    cout << "Numero a procurar: ";
    cin >> num;

    cout << "Encontrado: "
         << array.search_array(num, inf, sup)
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_09()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    int limite = array.getlength();
    int inf, sup;

    cout << "Limite inferior [0," << limite - 1 << "]: ";
    cin >> inf;

    cout << "Limite superior [" << inf << ","
         << limite - 1 << "]: ";
    cin >> sup;

    cout << "Soma multiplicada por -1: "
         << array.multiply_array(inf, sup, -1)
         << endl;

    pause("Aperte ENTER para continuar");
}

//========================================================

void method_10()
{
    Array<int> array(1, 0);

    array.fread("DADOS1.TXT");

    array.sort_array_down();
    array.print();

    pause("Aperte ENTER para continuar");
}