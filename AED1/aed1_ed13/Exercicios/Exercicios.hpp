#ifndef CLASSEC_HPP
#define CLASSEC_HPP

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

class contato {
private:
    string nome;
    string fone1;
    string fone2;
    int erro;

    void setErro(int c) {
        erro = c;
    }

public:
    // construtor
    contato() {
        nome = "";
        fone1 = "";
        fone2 = "";
        erro = 0;
    }

    // construtor com parâmetros
    contato(string n, string f1, string f2) {
        nome = n;
        fone1 = f1;
        fone2 = f2;
        erro = 0;
    }

    // erro
    bool hasErro() {
        return erro != 0;
    }

    // nome
    void setNome(string n) {
        if (n.empty()) {
            setErro(1);
        } else {
            nome = n;
        }
    }

    void readName() {
        cout << "Nome: " << nome << endl;
    }

    // telefone 1
    void setFone(string f) {
        if (f.empty()) {
            setErro(2);
        } else {
            fone1 = f;
        }
    }

    // telefone 2a
    void setPhone2a(string f) {
        fone2 = f;
    }

    // telefone 2b
    void setPhone2b(string f) {
        if (f.empty()) {
            setErro(3);
        } else {
            fone2 = f;
        }
    }

    // telefone 2c
    void setPhone2c(string f) {
        fone2 = f;
    }

    // leitura de telefones (CORRIGIDO - SEU PROBLEMA ESTAVA AQUI)
    void readPhone() {
        cout << "Telefone 1: " << fone1 << endl;
        cout << "Telefone 2: " << fone2 << endl;
    }

    // valida telefone (simples)
    bool isvalidPhone(string f) {
        return !f.empty();
    }

    // quantidade de telefones
    int phones() {
        int count = 0;
        if (!fone1.empty()) count++;
        if (!fone2.empty()) count++;
        return count;
    }

    // arquivo write
    void writeToFile(string filename) {
        ofstream file(filename);
        file << nome << endl;
        file << fone1 << endl;
        file << fone2 << endl;
        file.close();
    }

    // arquivo read
    void fread(string filename) {
        ifstream file(filename);
        if (file.is_open()) {
            getline(file, nome);
            getline(file, fone1);
            getline(file, fone2);
            file.close();
        } else {
            setErro(4);
        }
    }

    // print formatado em arquivo
    void fprint(string filename) {
        ofstream file(filename);
        file << "Nome: " << nome << endl;
        file << "Fone1: " << fone1 << endl;
        file << "Fone2: " << fone2 << endl;
        file.close();
    }
};

#endif