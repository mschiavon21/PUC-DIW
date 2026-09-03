#include "Exemplos.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
    int x = 0;

    do {
        cout << "\nEXEMPLO1401 - Programa - v0.0\n" << endl;

        cout << "Opcoes" << endl;
        cout << "0 - Parar" << endl;
        cout << "1 - Testar definicoes" << endl;

        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        switch (x) {
            case 0:
                method_00();
                break;

            case 1:
                method_01();
                break;

            default:
                cout << endl << "ERRO: Valor invalido." << endl;
                break;
        }

    } while (x != 0);

    cout << "\nPrograma encerrado." << endl;

    return 0;
}