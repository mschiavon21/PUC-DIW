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

void analisar(char *palavra, bool reverso, int tipo){
    int tamanho = strlen(palavra);
    int i;

    int inicio = reverso ? tamanho - 1 : 0;
    int fim    = reverso ? -1 : tamanho;
    int passo  = reverso ? -1 : 1;

    for(i = inicio; i != fim; i += passo){

        if( (tipo == 1 && ehMaiusculaMenorQueK(palavra[i])) ||
            (tipo == 2 && ehMinusculaMaiorQueK(palavra[i])) ){
            
            IO_printf("Posicao [%d]: %c\n", i, palavra[i]);
        }
    }
}

void mostrarString(char *palavra){
    int i;
    for(i = 0; palavra[i] != '\0'; i++){
        IO_printf("%d: [%c]\n", i, palavra[i]);
    }
}

void method_01(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas menores que 'K':\n");

    analisar(palavra, false, 1);

    IO_pause("Aperte ENTER para continuar");
}

void method_02(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMinusculas maiores que 'k':\n");

    analisar(palavra, false, 2);

    IO_pause("Aperte ENTER para continuar");
}

void method_03(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas menores que 'K' (reverso):\n");

    analisar(palavra, true, 1);

    IO_pause("Aperte ENTER para continuar");
}

void method_04(void){
    char *palavra = IO_new_chars(STR_SIZE);

    palavra = IO_readstring("Insira uma palavra: ");
    IO_printf("\nString completa:\n");

    mostrarString(palavra);

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
        IO_printf("4 - Metodo 04\n");

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

            case 4:
                method_04();
                break;

            default:
                IO_printf("Valor invalido!\n");
        }

    } while(opcao != 0);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}