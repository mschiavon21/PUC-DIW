#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "Metodos.h"

int main() {
    int x = 0;

    do {
        printf("Escolha um metodo:\n");
        printf("0. Terminar\n");

        for (int i = 1; i <= 10; i++) {
            printf("%d. Metodo-%d\n", i, i);
        }

        scanf("%d", &x);
        getchar();

        switch (x) {
            case 0:
                break;

            case 1:
                method_01();
                break;

            default:
                printf("Erro: metodo invalido!\n");
                break;
        }

    } while (x != 0);

    printf("Aperte ENTER para terminar");
    getchar();

    return 0;
}