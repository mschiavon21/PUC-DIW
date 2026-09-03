#include "CExemplo_Classe.hpp"
#include <iostream>

using std::cout;
using std::endl;

void method_00() {
    cout << "\nMethod_00 - v0.0\n" << endl;
}

void method_01() {
    MyString *s = new MyString();

    cout << "\nMethod_01 - v0.0\n" << endl;

    cout << "Erro atual: " << s->getErroMsg() << endl;

    delete s;
}