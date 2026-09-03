#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "io.h"

#define STR_SIZE 100

void method_01(void){
    char palavra[STR_SIZE];
    int i = 0;
    int contador = 0;

    printf("Insira uma palavra: ");
    if (fgets(palavra, STR_SIZE, stdin) == NULL) {
        printf("Erro na leitura.\n");
        return;
    }

    palavra[strcspn(palavra, "\n")] = '\0';

    for(i = 0; palavra[i] != '\0'; i++){
        char x = palavra[i];

        if(isupper(x) && x < 'K'){
            printf("Posicao [%d]: %c\n", i, x);
            contador++;
        }
    }

    printf("\nTotal de letras encontradas: %d\n", contador);

    printf("Pressione ENTER para continuar...");
    getchar();
}

int main(void){
    int opcao = -1;

    do{
        printf("\n===== MENU =====\n");
        printf("0 - Terminar\n");
        printf("1 - Metodo 01\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 0:
                printf("Encerrando...\n");
                break;
            case 1:
                method_01();
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}