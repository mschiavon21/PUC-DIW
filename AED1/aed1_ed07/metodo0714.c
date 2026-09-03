#include <stdio.h>     
#include <stddef.h>    
#include <stdlib.h>    
#include <string.h>    
#include <stdarg.h>    
#include <stdbool.h>   
#include <ctype.h>     
#include <math.h>      
#include <time.h>      
#include <wchar.h>     
#include <iso646.h>    
#include "Tarefas.h"

void metodo(int x){
    if(x > 0){
        metodo(x - 1);
        printf("%d%s%d\n", x, ".Metodo-", x);
    }
}

int main(void){
    int metodos = 10;
    int opcao = 0;

    do{
        printf("\n0 - Terminar\n");
        metodo(metodos);

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch(opcao){
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

            default:
                printf("Metodo invalido!\n");
                break;
        }

    }while(opcao != 0);

    printf("Aperte ENTER para terminar");
    getchar();

    return 0;
}