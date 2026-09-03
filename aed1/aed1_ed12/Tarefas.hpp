#include "TClasse.hpp"

void method_01()
{
    int inf = 0;
    int sup = 0;

    matrix<int> int_matrix1(3, 3, 0);
    matrix<int> int_matrix2(3, 3, 0);

    cout << "Defina o intervalo inferior: ";
    cin >> inf;

    cout << "Defina o intervalo superior: ";
    cin >> sup;

    int_matrix1.generaterandom(inf, sup);
    int_matrix2.generaterandom(inf, sup);

    int_matrix1.print();
    int_matrix2.print();

    int_matrix1.fprint("DADOS1.TXT");
    int_matrix2.fprint("DADOS2.TXT");

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_02()
{
    matrix<int> int_matrix1(1, 1, 0);
    matrix<int> int_matrix2(1, 1, 0);

    int_matrix1.freadmatrix("DADOS1.TXT");
    int_matrix2.freadmatrix("DADOS1.TXT");

    int_matrix1.print();

    int_matrix2 = int_matrix1;

    int_matrix2.multiply(2);

    int_matrix2.print();

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_03()
{
    bool teste = false;

    matrix<int> int_matrix(1, 1, 0);

    int_matrix.freadmatrix("DADOS1.TXT");

    teste = int_matrix.isidentity();

    cout << "Teste = " << teste << endl;

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_04()
{
    bool result = false;

    matrix<int> int_matrix1(1, 1, 0);
    matrix<int> int_matrix2(1, 1, 0);

    int_matrix1.freadmatrix("DADOS1.TXT");
    int_matrix2.freadmatrix("DADOS2.TXT");

    result = (int_matrix1 == int_matrix2);

    cout << "Sao iguais = " << result << endl;

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_05()
{
    int soma = 0;

    matrix<int> int_matrix1(1, 1, 0);
    matrix<int> int_matrix2(1, 1, 0);

    int_matrix1.freadmatrix("DADOS1.TXT");
    int_matrix2.freadmatrix("DADOS2.TXT");

    soma = int_matrix1.addmatrix(int_matrix2);

    cout << "Soma = " << soma << endl;

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_06()
{
    matrix<int> int_matrix(1, 1, 0);

    int_matrix.freadmatrix("DADOS1.TXT");

    int_matrix.print();

    int_matrix.addrows(0, 1, -1);

    int_matrix.print();

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_07()
{
    matrix<int> int_matrix(1, 1, 0);

    int_matrix.freadmatrix("DADOS1.TXT");

    int_matrix.print();

    int_matrix.subtractrows(0, 1, -1);

    int_matrix.print();

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_08()
{
    matrix<int> int_matrix(1, 1, 0);

    int n = 0;
    int linha = -1;

    cout << "Insira um numero para procurar: ";
    cin >> n;

    int_matrix.freadmatrix("DADOS1.TXT");

    linha = int_matrix.searchrows(n);

    if (linha == -1)
    {
        cout << "O numero nao existe na matriz." << endl;
    }
    else
    {
        cout << "O numero esta na linha: " << linha << endl;
    }

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_09()
{
    matrix<int> int_matrix(1, 1, 0);

    int n = 0;
    int coluna = -1;

    cout << "Insira um numero para procurar: ";
    cin >> n;

    int_matrix.freadmatrix("DADOS1.TXT");

    coluna = int_matrix.searchcolumns(n);

    if (coluna == -1)
    {
        cout << "O numero nao existe na matriz." << endl;
    }
    else
    {
        cout << "O numero esta na coluna: " << coluna << endl;
    }

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}

void method_10()
{
    matrix<int> int_matrix(1, 1, 0);

    int_matrix.freadmatrix("DADOS1.TXT");

    cout << "Matriz original:" << endl;
    int_matrix.print();

    int_matrix.transpose();

    cout << "Matriz transposta:" << endl;
    int_matrix.print();

    cout << "Aperte ENTER para continuar" << endl;
    getchar();
}