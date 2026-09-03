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

class Erro {
private:
    int erro;

protected:
    void setErro(int codigo) {
        erro = codigo;
    }

public:
    Erro() {
        erro = 0;
    }

    ~Erro() {
    }

    int getErro() {
        return erro;
    }
};