#include <stdio.h>
#include "io.h"
#include "Metodos.h"

// Definição de tipo para função
typedef void (*Metodo)();

// Lista de métodos
Metodo metodos[] = {
    method_01,
    method_02,
    method_03,
    method_04,
    method_05,
    method_06,
    method_07,
    method_08,
    method_09,
    method_10
};

int main() {
    int opcao = 0;
    int total = sizeof(metodos) / sizeof(metodos[0]);

    do {
        IO_printf("\n=== MENU DE METODOS ===\n");
        IO_printf("0 - Sair\n");

        // Mostrar métodos automaticamente
        for (int i = 0; i < total; i++) {
            printf("%d - Metodo %02d\n", i + 1, i + 1);
        }

        opcao = IO_readint("Escolha: ");

        if (opcao == 0) {
            IO_printf("Encerrando...\n");
        } 
        else if (opcao >= 1 && opcao <= total) {
            IO_printf("\nExecutando Metodo %02d...\n", opcao);
            metodos[opcao - 1]();  // chama automaticamente
        } 
        else {
            IO_printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    IO_printf("Aperte ENTER para sair...");
    getchar();

    return 0;
}