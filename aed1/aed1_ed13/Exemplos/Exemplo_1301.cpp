#include "Exemplos.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void recursao(int n) {
    if (n > 0) {
        recursao(n - 1);
        cout << n << ". Exemplo - " << n << endl;
    }
}

int main() {
    int opcao = 0;
    int n = 10;

    do {
        cout << "Escolha um Metodo: " << endl;
        cout << "0. Terminar" << endl;

        recursao(n);

        cin >> opcao;
        getchar();

        switch (opcao) {
            case 0:
                break;
            case 1:
                example_01();
                break;
            case 2:
                example_02();
                break;
            case 3:
                example_03();
                break;
            case 4:
                example_04();
                break;
            case 5:
                example_05();
                break;
            case 6:
                example_06();
                break;
            case 7:
                example_07();
                break;
            case 8:
                example_08();
                break;
            case 9:
                example_09();
                break;
            case 10:
                example_10();
                break;
            default:
                cout << "Exemplo invalido!" << endl;
                break;
        }

    } while (opcao != 0);

    cout << "Aperte ENTER para terminar" << endl;
    getchar();

    return 0;
}