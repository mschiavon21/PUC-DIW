#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "io.h"
#include<ctype.h>

#define STR_SIZE 100

bool f_maiuscula_menor_K(char c){
    return (isupper(c) && c < 'K');
}

bool f_minuscula_maior_k(char c){
    return (islower(c) && c > 'k');
}

bool f_nao_letra_impar(char c){
    return ((c % 2 != 0) && !isalpha(c));
}

void analisar(char *palavra, bool reverso, bool (*filtro)(char)){
    int tamanho = strlen(palavra);

    int inicio = reverso ? tamanho - 1 : 0;
    int fim    = reverso ? -1 : tamanho;
    int passo  = reverso ? -1 : 1;

    for(int i = inicio; i != fim; i += passo){
        if(filtro == NULL || filtro(palavra[i])){
            IO_printf("%d: [%c]\n", i, palavra[i]);
        }
    }
}

void method_01(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nMaiusculas < K:\n");
    analisar(palavra, false, f_maiuscula_menor_K);

    IO_pause("ENTER...");
}

void method_02(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nMinusculas > k:\n");
    analisar(palavra, false, f_minuscula_maior_k);

    IO_pause("ENTER...");
}

void method_03(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nMaiusculas < K (reverso):\n");
    analisar(palavra, true, f_maiuscula_menor_K);

    IO_pause("ENTER...");
}

void method_04(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nString completa:\n");
    analisar(palavra, false, NULL);

    IO_pause("ENTER...");
}

void method_05(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nString reversa:\n");
    analisar(palavra, true, NULL);

    IO_pause("ENTER...");
}

void method_06(void){
    char *palavra = IO_new_chars(STR_SIZE);
    palavra = IO_readstring("Insira uma palavra: ");

    IO_printf("\nNao letras com ASCII impar:\n");
    analisar(palavra, false, f_nao_letra_impar);

    IO_pause("ENTER...");
}

int main(){
    int opcao = 0;

    do{
        IO_printf("\n===== MENU =====\n");
        IO_printf("0 - Sair\n");
        IO_printf("1 - Maiusculas < K\n");
        IO_printf("2 - Minusculas > k\n");
        IO_printf("3 - Maiusculas < K (reverso)\n");
        IO_printf("4 - Mostrar string\n");
        IO_printf("5 - Mostrar reverso\n");
        IO_printf("6 - Nao letras impares\n");

        opcao = IO_readint("Opcao: ");

        switch(opcao){
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 0: IO_printf("Saindo...\n"); break;
            default: IO_printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    IO_pause("ENTER para finalizar");
    return 0;
}