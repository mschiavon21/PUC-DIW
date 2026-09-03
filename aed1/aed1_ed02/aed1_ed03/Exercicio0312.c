#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "io.h"
#include<ctype.h>

#define STR_SIZE 100

void method_01(void){
    char *palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int y = 0;
    char x = '\0';

    palavra = IO_readstring("Insira uma palavra: ");

    tamanho = strlen(palavra);

    for(y = 0; y < tamanho; y++) 
    {
        x = palavra[y];

        if(('A' <= x && x <= 'Z') && (x < 'K')){
            IO_printf("Letra maiuscula menor que 'K' [%d]: %c\n", y, x);
        }
    }

    IO_pause("Aperte ENTER para continuar");
}


void method_02(void){
    char *palavra = IO_new_chars(STR_SIZE);
    int y = 0;
    int tamanho = 0;
    char x = '\0';

    palavra = IO_readstring("Insira uma palavra: ");

    tamanho = strlen(palavra);

    for(y = 0; y < tamanho; y++){
        x = palavra[y];

        if(('a' <= x && x <= 'z') && (x > 'k')){
            IO_printf("Posicao [%d]: %c\n", y, x);
        }
    }

    IO_pause("Aperte ENTER para continuar");
}


int main(){
    int opcao = 0;
    int y = 0;

    do{
        IO_printf("\n0.Terminar\n");

        for(y = 1; y <= 2; y++){
            IO_printf("%d.Metodo_%d\n", y, y);
        }

        opcao = IO_readint("Escolha uma opcao: ");

        switch(opcao){
            case 0:
                break;

            case 1:
                method_01();
                break;
            case 2:
                method_02();
                break;

            default:
                IO_printf("Valor invalido!\n");
                break;
        }

    } while(opcao != 0);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}