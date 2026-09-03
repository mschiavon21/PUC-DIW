#include "CTarefa.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void pause() {
    cout << "Aperte ENTER para continuar" << endl;
    cin.ignore();
    cin.get();
}

void method_01() {
    Num<double>* numeros = new Num<double>(5);

    numeros->getNum();
    numeros->print_signal();

    delete numeros;
    pause();
}

void method_02() {
    Num<int>* numeros = new Num<int>(5);

    numeros->getNum();
    numeros->print_signal();

    delete numeros;
    pause();
}

void method_03() {
    Num<int>* numeros = new Num<int>(5);

    numeros->print();

    delete numeros;
    pause();
}

void method_04() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();

    bool achou = strings->contains("Gustavo");
    cout << "Esta contido: " << achou << endl;

    delete strings;
    pause();
}

void method_05() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->toUpperCase();

    cout << "String Maiuscula: " << s << endl;

    strings->print();

    delete strings;
    pause();
}

void method_06() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->toLowerCase();

    cout << "String Minuscula: " << s << endl;

    strings->print();

    delete strings;
    pause();
}

void method_07() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->replace('o', 'a');

    cout << "String replaced: " << s << endl;

    strings->print();

    delete strings;
    pause();
}

void method_08() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->encrypt();

    cout << "String encrypted: " << s << endl;

    strings->print();

    delete strings;
    pause();
}

void method_09() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->decrypt();

    cout << "String decrypted: " << s << endl;

    strings->print();

    delete strings;
    pause();
}

void method_10() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    int y = strings->split();

    cout << "Quantidade total de strings separadas por espaco: " << y << endl;

    delete strings;
    pause();
}

void method_11() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    char delimitador;

    cout << "Digite o caractere delimitador: ";
    cin >> delimitador;

    int partes = strings->split_by(delimitador);

    cout << "Quantidade total de fragmentos: " << partes << endl;

    delete strings;
    pause();
}

void method_12() {
    Num<string>* strings = new Num<string>(5);

    strings->set_String();
    strings->print();

    std::string s = strings->reverse_string();

    cout << "String Invertida: " << s << endl;

    strings->print();

    delete strings;
    pause();
}