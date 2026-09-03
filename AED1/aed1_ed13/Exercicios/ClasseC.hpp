#include "ClasseE.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;

class contato : public Erro {
private:
    string nome;
    string fones[2];
    int quantidade;

public:
    contato() {
        setErro(0);
        nome = "";
        fones[0] = "";
        fones[1] = "";
        quantidade = 0;
    }

    contato(string nome, string fone) {
        setErro(0);
        this->nome = nome;
        fones[0] = fone;
        fones[1] = "";
        quantidade = 1;
    }

    contato(string nome, string fone1, string fone2) {
        setErro(0);
        this->nome = nome;
        fones[0] = fone1;
        fones[1] = fone2;
        quantidade = 2;
    }

    contato(const contato &other) {
        setErro(other.hasErro());
        nome = other.nome;
        quantidade = other.quantidade;

        for (int x = 0; x < quantidade; x++) {
            fones[x] = other.fones[x];
        }
    }

    ~contato() {}

    void setNome(string nome) {
        if (nome.empty()) setErro(1);
        else this->nome = nome;
    }

    void setFone(string fone) {
        if (fone.empty()) setErro(2);
        else {
            fones[0] = fone;
            if (quantidade == 0) quantidade = 1;
        }
    }

    string getNome() const {
        return nome;
    }

    string getFone() const {
        return fones[0];
    }

    string getFone2() const {
        return fones[1];
    }

    int phones() const {
        return quantidade;
    }

    string toString() const {
        if (quantidade == 2) {
            return "{" + nome + "," + fones[0] + "," + fones[1] + "}";
        }
        return "{" + nome + "," + fones[0] + "}";
    }

    bool hasErro() const {
        return hasErro() !=0;
    }
};

using ref_contato = contato*;