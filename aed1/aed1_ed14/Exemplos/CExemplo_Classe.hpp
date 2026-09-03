#include "CExemplo_erro.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class MyString : public Erro {
public:
    string getErroMsg() {
        int codigo = getErro();

        switch (codigo) {
            case 0:
                return "NO_ERROR";
            case 1:
                return "ERRO: string vazia";
            case 2:
                return "ERRO: valor invalido";
            default:
                return "ERRO desconhecido";
        }
    }
};