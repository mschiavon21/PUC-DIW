#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include "Metodos.h"

// Limpar tela (funciona no Windows e Linux)
void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Pausa segura
void pausar() {
    printf("\nPressione ENTER para continuar...");
    getchar();
}

// Mostrar menu
void mostrarMenu() {
    printf("=== MENU DE METODOS ===\n");
    printf("0 - Sair\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d - Metodo %02d\n", i, i);
    }
}

// Executar método
void executar(int opcao) {
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
            printf("Opcao invalida!\n");
    }
}

int main() {
    int opcao;

    do {
        limparTela();
        mostrarMenu();

        opcao = IO_readint("\nEscolha um metodo: ");

        if (opcao != 0) {
            printf("\n>>> Executando Metodo %02d <<<\n\n", opcao);
            executar(opcao);
            pausar();
        }

    } while (opcao != 0);

    limparTela();
    printf("Programa encerrado.\n");

    return 0;
}