#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "io.h"

int main(void){
    char *linha = NULL;
    int tamanho = 0;

    int qtdOutros = 0;
    int qtdEspacos = 0;
    int qtdPontuacao = 0;
    int qtdControle = 0;

    linha = IO_readln("Insira uma linha de caracteres: ");
    tamanho = strlen(linha);

    IO_printf("\n--- Caracteres NAO alfanumericos ---\n");

    for(int i = 0; i < tamanho; i++){
        char x = linha[i];

        if(!isalnum(x)){
            IO_printf("%d: %c [%d] -> ", i, x, (int)x);

            if(isspace(x)){
                IO_printf("ESPACO\n");
                qtdEspacos++;
            }
            else if(ispunct(x)){
                IO_printf("PONTUACAO\n");
                qtdPontuacao++;
            }
            else if(iscntrl(x)){
                IO_printf("CONTROLE\n");
                qtdControle++;
            }
            else{
                IO_printf("OUTRO\n");
                qtdOutros++;
            }
        }
    }

    IO_printf("\n--- RESUMO ---\n");
    IO_printf("Espacos: %d\n", qtdEspacos);
    IO_printf("Pontuacao: %d\n", qtdPontuacao);
    IO_printf("Controle: %d\n", qtdControle);
    IO_printf("Outros: %d\n", qtdOutros);

    IO_pause("Aperte ENTER para terminar");
    return 0;
}