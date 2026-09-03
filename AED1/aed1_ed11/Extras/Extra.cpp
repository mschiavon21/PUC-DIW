#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include "Extra.hpp"

using namespace std;

void recursao(int x)
{
    if (x > 0)
    {
        recursao(x - 1);
        cout << x << ". Extra-" << x << endl;
    }
}

int main()
{
    int x = 2;
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
            extra_01();
            break;

        case 2:
            extra_02();
            break;

        default:
            cout << "Exemplo invalido!" << endl;
            break;
        }

    } while (opcao != 0);

    pause("Aperte ENTER para terminar");

    return 0;
}