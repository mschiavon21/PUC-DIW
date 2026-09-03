#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "io.h"
#include<ctype.h>

#define STR_SIZE 100

// ================= FUNCOES AUXILIARES =================

// Ler intervalo inteiro válido
void ler_intervalo_int(int *inf, int *sup){
    do{
        *inf = IO_readint("Limite inferior: ");
        *sup = IO_readint("Limite superior: ");
    } while(*inf > *sup);
}

// Ler intervalo double válido
void ler_intervalo_double(double *inf, double *sup){
    do{
        *inf = IO_readdouble("Limite inferior: ");
        *sup = IO_readdouble("Limite superior: ");
    } while(*inf >= *sup);
}

// Ler intervalo (0,1)
void ler_intervalo_01(double *inf, double *sup){
    do{
        *inf = IO_readdouble("Limite inferior (0 a 1): ");
        *sup = IO_readdouble("Limite superior (0 a 1): ");
    } while(!(0 < *inf && *inf < *sup && *sup < 1));
}

// ================= METODOS STRING =================

void method_01(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = 0; i < strlen(p); i++){
        if(isupper(p[i]) && p[i] < 'K'){
            IO_printf("[%d]: %c\n", i, p[i]);
        }
    }
    IO_pause("ENTER...");
}

void method_02(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = 0; i < strlen(p); i++){
        if(islower(p[i]) && p[i] > 'k'){
            IO_printf("[%d]: %c\n", i, p[i]);
        }
    }
    IO_pause("ENTER...");
}

void method_03(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = strlen(p)-1; i >= 0; i--){
        if(isupper(p[i]) && p[i] < 'K'){
            IO_printf("[%d]: %c\n", i, p[i]);
        }
    }
    IO_pause("ENTER...");
}

void method_04(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = 0; i < strlen(p); i++){
        IO_printf("[%d]: %c\n", i, p[i]);
    }
    IO_pause("ENTER...");
}

void method_05(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = strlen(p)-1; i >= 0; i--){
        IO_printf("[%d]: %c\n", i, p[i]);
    }
    IO_pause("ENTER...");
}

void method_06(void){
    char *p = IO_readstring("Palavra: ");
    for(int i = 0; i < strlen(p); i++){
        if(!isalpha(p[i]) && p[i] % 2 != 0){
            IO_printf("[%d]: %c\n", i, p[i]);
        }
    }
    IO_pause("ENTER...");
}

// ================= METODOS NUMERICOS =================

void method_07(void){
    int inf, sup;
    ler_intervalo_int(&inf, &sup);

    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        int v = IO_readint("Valor: ");
        if(v >= inf && v <= sup && v % 5 == 0){
            IO_printf("%d: %d\n", i, v);
        }
    }

    IO_pause("ENTER...");
}

void method_08(void){
    int inf, sup;
    ler_intervalo_int(&inf, &sup);

    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        int v = IO_readint("Valor: ");
        if(v >= inf && v <= sup && v % 3 == 0 && v % 5 != 0){
            IO_printf("%d: %d\n", i, v);
        }
    }

    IO_pause("ENTER...");
}

void method_09(void){
    double inf, sup;
    ler_intervalo_double(&inf, &sup);

    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        double v = IO_readdouble("Valor: ");
        int parte = (int)v;

        if(v > inf && v < sup && parte % 2 == 0 && parte < 6){
            IO_printf("%d: %.2lf\n", i, v);
        }
    }

    IO_pause("ENTER...");
}

void method_10(void){
    double inf, sup;
    ler_intervalo_01(&inf, &sup);

    int qtd = IO_readint("Quantidade: ");

    for(int i = 1; i <= qtd; i++){
        double v = IO_readdouble("Valor: ");
        double frac = v - (int)v;

        if(frac > inf && frac < sup){
            IO_printf("%d: %.2lf\n", i, frac);
        }
    }

    IO_pause("ENTER...");
}