#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo

class Erro{
private:
int erro;
protected:
void setErro(int codigo){

erro = codigo;

}
public:
Erro(){

erro = 0;
}

~Erro(){
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

    Erro() : erro(0) {}

    ~Erro() {}

    int getErro() const {
        return erro;
    }
};

}

int getErro(){



return(erro);
}



};