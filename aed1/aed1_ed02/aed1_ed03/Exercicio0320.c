#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "io.h"
#include "metodos.h"

typedef void (*Metodo)(void);

int main(void){
    int opcao = 0;

    Metodo metodos[] = {
        NULL,
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

    int total = 10;

    do{
        IO_printf("\n===== MENU =====\n");
        IO_printf("0 - Sair\n");

        for(int i = 1; i <= total; i++){
            IO_printf("%d.Metodo_%d\n", i, i);
        }

        opcao = IO_readint("Escolha uma opcao: ");

        if(opcao == 0){
            IO_printf("Encerrando...\n");
        }
        else if(opcao >= 1 && opcao <= total){
            metodos[opcao]();
        }
        else{
            IO_printf("Valor invalido!\n");
        }

    } while(opcao != 0);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}