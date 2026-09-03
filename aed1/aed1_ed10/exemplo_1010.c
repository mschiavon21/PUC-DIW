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
#include "Exemplo.h"

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
        printf("0 - Terminar\n");

        recursao(x);

        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
            case 0:
                break;

            case 1:
                example_01();
                break;

            case 2:
                example_02();
                break;

            case 3:
                example_03();
                break;

            case 4:
                example_04();
                break;

            case 5:
                example_05();
                break;

            case 6:
                example_06();
                break;

            case 7:
                example_07();
                break;

            case 8:
                example_08();
                break;

            case 9:
                example_09();
                break;

            case 10:
                example_10();
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