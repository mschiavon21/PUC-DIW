#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "io.h"
#include<ctype.h>

#define STR_SIZE 100

void processar(char *p, bool reverso, int tipo){
    int tam = strlen(p);

    int i = reverso ? tam - 1 : 0;
    int fim = reverso ? -1 : tam;
    int passo = reverso ? -1 : 1;

    for(; i != fim; i += passo){
        char x = p[i];
        bool ok = false;

        switch(tipo){
            case 1: ok = (isupper(x) && x < 'K'); break;
            case 2: ok = (islower(x) && x > 'k'); break;
            case 3: ok = (!isalpha(x) && x % 2 != 0); break;
            case 0: ok = true; break;
        }

        if(ok){
            IO_printf("%d: [%c]\n", i, x);
        }
    }
}

void method_01(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas < K\n");
    processar(p, false, 1);
    IO_pause("ENTER...");
}

void method_02(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMinusculas > k\n");
    processar(p, false, 2);
    IO_pause("ENTER...");
}

void method_03(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nMaiusculas < K (reverso)\n");
    processar(p, true, 1);
    IO_pause("ENTER...");
}

void method_04(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nString completa\n");
    processar(p, false, 0);
    IO_pause("ENTER...");
}

void method_05(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nString reversa\n");
    processar(p, true, 0);
    IO_pause("ENTER...");
}

void method_06(void){
    char *p = IO_readstring("Insira uma palavra: ");
    IO_printf("\nNao letras impares\n");
    processar(p, false, 3);
    IO_pause("ENTER...");
}

void method_07(void){
    int inf = IO_readint("Limite inferior: ");
    int sup = IO_readint("Limite superior: ");
    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        int v = IO_readint("Valor: ");
        if(v >= inf && v <= sup && v % 5 == 0){
            IO_printf("%d: %d (multiplo de 5)\n", i, v);
        }
    }

    IO_pause("ENTER...");
}

void method_08(void){
    int inf = IO_readint("Limite inferior: ");
    int sup = IO_readint("Limite superior: ");
    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        int v = IO_readint("Valor: ");
        if(v >= inf && v <= sup && v % 3 == 0 && v % 5 != 0){
            IO_printf("%d: %d (multiplo de 3 e nao 5)\n", i, v);
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
        IO_printf("7 - Multiplos de 5 no intervalo\n");
        IO_printf("8 - Multiplos de 3 (nao 5)\n");

        op = IO_readint("Opcao: ");

        switch(op){
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            case 0: IO_printf("Saindo...\n"); break;
            default: IO_printf("Opcao invalida!\n");
        }

    } while(op != 0);

    IO_pause("ENTER para finalizar");
    return 0;
}