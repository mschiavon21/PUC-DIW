#include "Tarefas.hpp"

void recursao(int x)
{
    if (x > 0)
    {
        recursao(x - 1);
        cout << x << ".Metodo-" << x << endl;
    }
}

int main()
{
    int opcao = 0;
    int x = 10;

    do
    {
        cout << "Escolha um Metodo:" << endl;
        cout << "0. Terminar" << endl;

        recursao(x);

        cin >> opcao;
        getchar();

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
                cout << "Metodo invalido!" << endl;
                break;
        }

    } while (opcao != 0);

    cout << "Aperte ENTER para terminar" << endl;
    getchar();

    return 0;
}