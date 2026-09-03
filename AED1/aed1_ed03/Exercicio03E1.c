#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "io.h"

int main(void){
    char *linha = NULL;
    int tamanho = 0;

    int qtdLetras = 0;
    int qtdNumeros = 0;

    char letras[100];
    char numeros[100];
    int iL = 0, iN = 0;

    linha = IO_readln("Insira uma linha de caracteres: ");
    tamanho = strlen(linha);

    IO_printf("\n--- Caracteres validos ---\n");

    for(int i = 0; i < tamanho; i++){
        char x = linha[i];

        if(isalpha(x)){
            IO_printf("%d: [LETRA] %c\n", i, x);
            letras[iL++] = x;
            qtdLetras++;
        }
        else if(isdigit(x)){
            IO_printf("%d: [NUMERO] %c\n", i, x);
            numeros[iN++] = x;
            qtdNumeros++;
        }
    }

    letras[iL] = '\0';
    numeros[iN] = '\0';

    IO_printf("\n--- RESUMO ---\n");
    IO_printf("Quantidade de letras: %d\n", qtdLetras);
    IO_printf("Quantidade de numeros: %d\n", qtdNumeros);

    IO_printf("Letras encontradas: %s\n", letras);
    IO_printf("Numeros encontrados: %s\n", numeros);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}