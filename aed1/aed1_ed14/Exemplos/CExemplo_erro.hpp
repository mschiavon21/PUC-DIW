#ifndef _ERRO_H_
#define _ERRO_H_

#include <string>

class Erro {
private:
    int erro;

public:
    // construtor
    Erro() : erro(0) {}

    // destrutor
    virtual ~Erro() {}

    // constante de mensagem
    static const std::string NO_ERROR;

    // retorna código real de erro
    int getErro() const {
        return erro;
    }

    // verifica se existe erro
    bool hasError() const {
        return erro != 0;
    }

    // mensagem de erro (polimorfismo)
    virtual std::string getErroMsg() const {
        switch (erro) {
            case 0:
                return NO_ERROR;
            case 1:
                return "Erro: valor vazio";
            case 2:
                return "Erro: valor invalido";
            default:
                return "Erro desconhecido";
        }
    }

protected:
    // define erro
    void setErro(int codigo) {
        erro = codigo;
    }
};

// definição da constante
const std::string Erro::NO_ERROR = "[ERRO] Nenhum erro detectado.";

#endif