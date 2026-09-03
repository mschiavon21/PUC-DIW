#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(const char str[], int tamanho) {
    int i = 0;
    int j = tamanho - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool ehFim(const char str[], int tamanho) {
    return tamanho == 3 && str[0] == 'F' && str[1] == 'I' && str[2] == 'M';
}

void processarLinha(char str[], int tamanho) {
    str[tamanho] = '\0';
    if (ehPalindromo(str, tamanho)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}

int main() {
    char str[1001];
    int tamanho = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\r') {
            if (tamanho > 0) {
                if (ehFim(str, tamanho)) {
                    break;
                }
                processarLinha(str, tamanho);
                tamanho = 0;
            }
        } else {
            if (tamanho < 1000) {
                str[tamanho++] = (char)c;
            }
        }
    }

    if (tamanho > 0 && !ehFim(str, tamanho)) {
        processarLinha(str, tamanho);
    }

    return 0;
}