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
    return (!isalpha(c) && (c % 2 != 0));
}

void processar_string(char *palavra, bool reverso, bool (*filtro)(char)){
    int tamanho = strlen(palavra);

    int i = reverso ? tamanho - 1 : 0;
    int fim = reverso ? -1 : tamanho;
    int passo = reverso ? -1 : 1;

    for(; i != fim; i += passo){
        if(filtro == NULL || filtro(palavra[i])){
            IO_printf("%d: [%c]\n", i, palavra[i]);
        }
    }
}

void method_01(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas < K:\n");
    processar_string(p, false, f_maiuscula_menor_K);
    IO_pause("ENTER...");
}

void method_02(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMinusculas > k:\n");
    processar_string(p, false, f_minuscula_maior_k);
    IO_pause("ENTER...");
}

void method_03(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas < K (reverso):\n");
    processar_string(p, true, f_maiuscula_menor_K);
    IO_pause("ENTER...");
}

void method_04(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nString completa:\n");
    processar_string(p, false, NULL);
    IO_pause("ENTER...");
}

void method_05(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nString reversa:\n");
    processar_string(p, true, NULL);
    IO_pause("ENTER...");
}

void method_06(void){
    char *p = IO_new_chars(STR_SIZE);
    p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nNao letras com ASCII impar:\n");
    processar_string(p, false, f_nao_letra_impar);
    IO_pause("ENTER...");
}

void method_07(void){
    int inf = IO_readint("Limite inferior: ");
    int sup = IO_readint("Limite superior: ");
    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        int valor = IO_readint("Valor: ");

        if(valor >= inf && valor <= sup && valor % 5 == 0){
            IO_printf("%d: %d (OK)\n", i, valor);
        }
    }

    IO_pause("ENTER...");
}

int main(){
    int op;

    do{
        IO_printf("\n===== MENU =====\n");
        IO_printf("0 - Sair\n");
        IO_printf("1 - Maiusculas < K\n");
        IO_printf("2 - Minusculas > k\n");
        IO_printf("3 - Reverso Maiusculas < K\n");
        IO_printf("4 - Mostrar string\n");
        IO_printf("5 - Mostrar reverso\n");
        IO_printf("6 - Nao letras impares\n");
        IO_printf("7 - Intervalo + multiplos de 5\n");

        op = IO_readint("Opcao: ");

        switch(op){
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 0: IO_printf("Saindo...\n"); break;
            default: IO_printf("Opcao invalida!\n");
        }

    } while(op != 0);

    IO_pause("ENTER para finalizar");
    return 0;
}