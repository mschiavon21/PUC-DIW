#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include "Exercicios.hpp"

using namespace std;

void recursao(int x)
{
    if (x > 0)
    {
        recursao(x - 1);
        cout << x << ". Exercicio-" << x << endl;
    }
}

int main()
{
    int x = 10;
    int opcao = 0;

    do
    {
        cout << "Escolha um exercicio:" << endl;
        cout << "0. Terminar" << endl;

        recursao(x);

        cin >> opcao;

        switch (opcao)
        {
        case 0:
            break;

        case 1:
            method_01();
            break;

        case 2:
            method_02();
            break;

        case 3:
            method_03();
            break;

        case 4:
            method_04();
            break;

        case 5:
            method_05();
            break;

        case 6:
            method_06();
            break;

        case 7:
            method_07();
            break;

        case 8:
            method_08();
            break;

        case 9:
            method_09();
            break;

        case 10:
            method_10();
            break;

        default:
            cout << "Exercicio invalido!" << endl;
            break;
        }

    } while (opcao != 0);

    pause("Aperte ENTER para terminar");

    return 0;
}