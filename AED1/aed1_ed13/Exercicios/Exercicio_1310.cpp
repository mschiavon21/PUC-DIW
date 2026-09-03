#include "Exercicios.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void recursao(int n) {
    if (n > 0) {
        recursao(n - 1);
        cout << n << ". Exercicio-" << n << endl;
    }
}

int main() {
    int opcao = 0;
    int n = 10;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "0. Terminar" << endl;
        cout << "1. Exibir exercicios (recursao)" << endl;
        cout << "2. Metodo 02" << endl;
        cout << "3. Metodo 03" << endl;
        cout << "4. Metodo 04" << endl;
        cout << "5. Metodo 05" << endl;
        cout << "6. Metodo 06" << endl;
        cout << "7. Metodo 07" << endl;
        cout << "8. Metodo 08" << endl;
        cout << "9. Metodo 09" << endl;
        cout << "10. Metodo 10" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 0:
                break;

            case 1:
                recursao(n);
                break;

            case 2:
                method_01();
                break;

            case 3:
                method_02();
                break;

            case 4:
                method_03();
                break;

            case 5:
                method_04();
                break;

            case 6:
                method_05();
                break;

            case 7:
                method_06();
                break;

            case 8:
                method_07();
                break;

            case 9:
                method_08();
                break;

            case 10:
                method_09();
                break;

            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

    } while (opcao != 0);

    cout << "Programa encerrado." << endl;

    return 0;
}