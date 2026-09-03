#include "CErros.hpp"
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

template<typename T>
class Num : public Erro {
private:
    T* data;
    char* sinal;
    int length;

public:

    Num() {
        data = nullptr;
        sinal = nullptr;
        length = 0;
    }

    Num(int n) {
        if (n > 0) {
            data = new T[n];
            sinal = new char[n];
            length = n;
        } else {
            data = nullptr;
            sinal = nullptr;
            length = 0;
        }
    }

    ~Num() {
        if (data != nullptr) delete[] data;
        if (sinal != nullptr) delete[] sinal;
    }

    std::string getErroMsg() {
        return NO_ERROR;
    }

    void getNum() {
        for (int x = 0; x < length; x++) {
            cout << "Digite o numero[" << x << "]: ";
            cin >> data[x];

            if (data[x].length() > 0 && data[x][0] == '-') {
                sinal[x] = '-';
            } else {
                sinal[x] = '+';
            }
        }
    }

    void print_signal() {
        if (data == nullptr || sinal == nullptr || length <= 0) {
            setErro(2);
            return;
        }

        for (int x = 0; x < length; x++) {
            cout << sinal[x] << data[x] << endl;
        }
    }

    void print() {
        if (data == nullptr) {
            setErro(1);
            return;
        }

        if (length <= 0) {
            setErro(3);
            return;
        }

        for (int x = 0; x < length; x++) {
            cout << data[x] << endl;
        }
    }

    bool contains(std::string a) {
        for (int x = 0; x < length; x++) {
            if (data[x] == a) {
                return true;
            }
        }
        return false;
    }

    void set_String() {
        for (int x = 0; x < length; x++) {
            cout << "Digite a string[" << x << "]: ";
            cin >> data[x];
        }
    }

    std::string toUpperCase() {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        for (char &c : data[x]) {
            c = toupper(c);
        }

        return data[x];
    }

    std::string toLowerCase() {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        for (char &c : data[x]) {
            c = tolower(c);
        }

        return data[x];
    }

    std::string replace(char c, char b) {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        for (char &ch : data[x]) {
            if (ch == c) {
                ch = b;
            }
        }

        return data[x];
    }

    std::string encrypt() {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        for (char &ch : data[x]) {
            ch = ch - 3;
        }

        return data[x];
    }

    std::string decrypt() {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        for (char &ch : data[x]) {
            ch = ch + 3;
        }

        return data[x];
    }

    int split() {
        int z = 0;

        for (int x = 0; x < length; x++) {
            for (char c : data[x]) {
                if (c == ' ') {
                    z++;
                }
            }
        }

        return z;
    }

    int split_by(char delimitador) {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        int z = 1;

        for (char c : data[x]) {
            if (c == delimitador) {
                cout << endl;
                z++;
            } else {
                cout << c;
            }
        }

        cout << endl;
        return z;
    }

    std::string reverse_string() {
        int x;
        cout << "Escolha a string: ";
        cin >> x;

        std::string invertida = "";

        for (int i = data[x].size() - 1; i >= 0; i--) {
            invertida += data[x][i];
        }

        data[x] = invertida;

        return invertida;
    }
};