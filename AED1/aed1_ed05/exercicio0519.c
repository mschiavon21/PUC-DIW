#include <stdio.h>
#include "MetodosT.h"
#include "io.h"

int main() {
    int opcao = 0;

    do {
        printf("\n=== MENU DE METODOS ===\n");
        printf("0 - Terminar\n");

        // Corrigido: começa em 1 (0 já é sair)
        for (int i = 1; i <= 10; i++) {
            printf("%d - Metodo %02d\n", i, i);
        }

        // Entrada
        printf("Escolha um metodo: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao) {
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
                printf("Metodo invalido!\n");
                break;
        }

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar...");
    getchar();

    return 0;
}