#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ofstream;
using std::ifstream;

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro {
private:
    int erro;

public:
    Erro() {
        erro = 0;
    }

    virtual ~Erro() {}

    static const std::string NO_ERROR;

    int getErro() const {
        return erro;
    }

    bool hasErro() const {
        return getErro() != 0;
    }

    virtual std::string getErroMsg() {
        if (getErro() == 1) {
            return "ERRO: Nao existe dados";
        }

        if (getErro() == 2) {
            return "ERRO: Sinal inexistente";
        }

        if (getErro() == 3) {
            return "ERRO: Tamanho invalido";
        }

        return NO_ERROR;
    }

protected:
    void setErro(int codigo) {
        erro = codigo;
    }
};

const std::string Erro::NO_ERROR = "[ERRO] Nao ha erro.";

#endif