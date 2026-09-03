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

//---------------------------------------------------------
// MOSTRAR METODOS
//---------------------------------------------------------

void recursao(int x)
{
    if(x > 0)
    {
        recursao(x - 1);
        printf("%d - Metodo %d\n", x, x);
    }
}

//---------------------------------------------------------
// MAIN
//---------------------------------------------------------

int main(void)
{
    int x = 10;
    int opcao = 0;

    do
    {
        printf("\n");
        printf("Escolha um metodo:\n");

        printf("0  - Terminar\n");

        recursao(x);

        printf("11 - Extra 1\n");
        printf("12 - Extra 2\n");

        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
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

            case 10:
                method_10();
                break;

            case 11:
                printf("Executando Extra 1...\n");
                break;

            case 12:
                printf("Executando Extra 2...\n");
                break;

            default:
                printf("ERRO: Metodo invalido!\n");
                break;
        }

    } while(opcao != 0);

    printf("\nAperte ENTER para terminar");
    getchar();

    return 0;
}