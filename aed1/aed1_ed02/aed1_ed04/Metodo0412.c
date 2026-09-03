#include <stdio.h>
#include "io.h"
#include "Metodos.h"

void mostrarMenu(int total) {
    IO_printf("\n=== MENU DE METODOS ===\n");
    IO_printf("0 - Terminar\n");

    for (int i = 1; i <= total; i++) {
        printf("%d - Metodo %02d\n", i, i);
    }
}

void executarMetodo(int opcao) {
    switch (opcao) {
        case 1: method_01(); break;
        case 2: method_02(); break;
        case 3: method_03(); break;
        case 4: method_04(); break;
        case 5: method_05(); break;
        case 6: method_06(); break;
        case 7: method_07(); break;
        case 8: method_08(); break;
        case 9: method_09(); break;
        case 10: method_10(); break;

        default:
            IO_printf("Metodo invalido!\n");
    }
}

void pausar() {
    IO_printf("\nPressione ENTER para continuar...");
    getchar();
}

int main() {
    int opcao = 0;
    const int TOTAL_METODOS = 10;

    do {
        mostrarMenu(TOTAL_METODOS);

        opcao = IO_readint("Escolha: ");

        if (opcao != 0) {
            IO_printf("\nExecutando Metodo %02d...\n\n", opcao);
            executarMetodo(opcao);
            pausar();
        }

    } while (opcao != 0);

    IO_printf("\nPrograma encerrado.\n");
    return 0;
}