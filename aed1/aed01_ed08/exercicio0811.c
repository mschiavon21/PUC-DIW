#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "Tarefas.h"

// Função para imprimir o menu de forma recursiva
void printar(int x) {
    if (x > 0) {
        printar(x - 1);
        printf("%d - Metodo %d\n", x, x);
    }
}

int main() {

    int opcaoMax = 10;
    int escolha = -1;

    do {
        // Menu
        printf("\n=============================\n");
        printf("Escolha uma opcao:\n");
        printf("0 - Terminar\n");
        printar(opcaoMax);
        printf("=============================\n");
        printf("Opcao: ");

        // Leitura segura
        if (scanf("%d", &escolha) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n'); // limpa buffer
            continue;
        }
        getchar(); // consumir ENTER

        printf("\n");

        // Controle das opções
        switch (escolha) {
            case 0:
                printf("Encerrando programa...\n");
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

            case 10:
                method_10();
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (escolha != 0);

    printf("\nAperte ENTER para terminar...");
    getchar();

    return 0;
}