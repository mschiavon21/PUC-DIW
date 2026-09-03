#include <stdio.h>
#include "MetodosT.h"
#include "io.h"

int main() {
    int opcao = 0;

    do {
        printf("\n=== MENU DE METODOS ===\n");
        printf("0 - Terminar\n");

        // Menu com 2 opções
        for (int i = 1; i <= 2; i++) {
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
                method_11(); // mantido conforme seu código
                break;

            case 2:
                method_02(); // opcional: para combinar com o menu
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