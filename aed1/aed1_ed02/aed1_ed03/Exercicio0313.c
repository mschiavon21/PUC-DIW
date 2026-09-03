#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "io.h"
#include<ctype.h>

#define STR_SIZE 100

bool ehMaiusculaMenorQueK(char c){
    return (isupper(c) && c < 'K');
}

bool ehMinusculaMaiorQueK(char c){
    return (islower(c) && c > 'k');
}

void analisar_string(char *palavra, bool reverso, int tipo){
    int tamanho = strlen(palavra);
    int i;

    if(reverso){
        for(i = tamanho - 1; i >= 0; i--){
            if((tipo == 1 && ehMaiusculaMenorQueK(palavra[i])) ||
               (tipo == 2 && ehMinusculaMaiorQueK(palavra[i]))){
                IO_printf("Posicao [%d]: %c\n", i, palavra[i]);
            }
        }
    } else {
        for(i = 0; i < tamanho; i++){
            if((tipo == 1 && ehMaiusculaMenorQueK(palavra[i])) ||
               (tipo == 2 && ehMinusculaMaiorQueK(palavra[i]))){
                IO_printf("Posicao [%d]: %c\n", i, palavra[i]);
            }
        }
    }
}

void method_01(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas menores que 'K':\n");

    analisar_string(palavra, false, 1);

    IO_pause("Aperte ENTER para continuar");
}

void method_02(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMinusculas maiores que 'k':\n");

    analisar_string(palavra, false, 2);

    IO_pause("Aperte ENTER para continuar");
}

void method_03(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas menores que 'K' (reverso):\n");

    analisar_string(palavra, true, 1);

    IO_pause("Aperte ENTER para continuar");
}

int main(){
    int opcao = 0;

    do{
        IO_printf("\n===== MENU =====\n");
        IO_printf("0 - Terminar\n");
        IO_printf("1 - Metodo 01\n");
        IO_printf("2 - Metodo 02\n");
        IO_printf("3 - Metodo 03\n");

        opcao = IO_readint("Escolha uma opcao: ");

        switch(opcao){
            case 0:
                IO_printf("Encerrando...\n");
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

            default:
                IO_printf("Valor invalido!\n");
        }

    } while(opcao != 0);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}