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
        getchar(); // limpar buffer

        switch (x) {
            case 0:
                break;

            case 1:
                method_01();
                break;

            case 2:
                method_02();
                break;

            case 3:
                method_03();
                break;

            case 4:
                method_04();
                break;

            case 5:
                method_05();
                break;

            case 6:
                method_06();
                break;

            case 7:
                method_07();
                break;

            case 8:
                method_08();
                break;

            case 9:
                method_09();
                break;

            default:
                printf("Erro: metodo invalido!\n");
                break;
        }

    } while (x != 0);

    printf("Aperte ENTER para terminar\n");
    getchar();

    return 0;
}