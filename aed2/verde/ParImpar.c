#include <stdio.h>

int ehPar(int n) {
    return n % 2 == 0;
}

int main(void) {
    int n, valor;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        printf("%s\n", ehPar(valor) ? "PAR" : "IMPAR");
    }

    return 0;
}