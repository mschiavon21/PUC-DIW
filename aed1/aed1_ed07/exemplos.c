#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STR_SIZE 100

// ===================== E1 =====================
void writeints(const char *fileName, int x){
    FILE* arquivo = fopen(fileName, "wt");
    if(!arquivo) return;

    for(int y = 1; y <= x; y++){
        fprintf(arquivo, "%d\n", y);
    }

    fclose(arquivo);
}

void example_01(){
    writeints("DADOS1.TXT", 10);
    printf("Aperte ENTER para continuar\n");
    getchar();
}

// ===================== E2 =====================
void e2(const char *fileName){
    FILE *arquivo = fopen(fileName, "rt");
    int x;

    if(!arquivo) return;

    while(fscanf(arquivo, "%d", &x) == 1){
        printf("%d\n", x);
    }

    fclose(arquivo);
}

void example_02(){
    e2("DADOS1.TXT");
    getchar();
}

// ===================== E3 =====================
void e3(const char *fileName, int x){
    FILE* arquivo = fopen(fileName, "wt");
    if(!arquivo) return;

    fprintf(arquivo, "%d\n", x);

    for(int y = 1; y <= x; y++){
        fprintf(arquivo, "%lf\n", (0.1 * y));
    }

    fclose(arquivo);
}

// ===================== E4 =====================
void e4(const char *fileName){
    FILE *arquivo = fopen(fileName, "rt");
    int x, y = 1;
    double z;

    if(!arquivo) return;

    fscanf(arquivo, "%d", &x);

    while(y <= x && fscanf(arquivo, "%lf", &z) == 1){
        printf("%2d: %lf\n", y, z);
        y++;
    }

    fclose(arquivo);
}

// ===================== E5 =====================
void e5(const char *fileName){
    FILE* arquivo = fopen(fileName, "wt");
    char palavra[STR_SIZE];

    if(!arquivo) return;

    printf("Digite palavras (PARAR para finalizar):\n");

    do{
        fgets(palavra, STR_SIZE, stdin);
        palavra[strcspn(palavra, "\n")] = 0;
        fprintf(arquivo, "%s\n", palavra);
    }while(strcmp(palavra, "PARAR") != 0);

    fclose(arquivo);
}

// ===================== E6 =====================
void e6(const char *fileName){
    FILE *arquivo = fopen(fileName, "rt");
    char palavra[STR_SIZE];

    if(!arquivo) return;

    while(fgets(palavra, STR_SIZE, arquivo)){
        palavra[strcspn(palavra, "\n")] = 0;

        if(strcmp(palavra, "PARAR") == 0) break;

        printf("%s\n", palavra);
    }

    fclose(arquivo);
}

// ===================== E7 =====================
void e7(const char *fileOut, const char *fileIn){
    FILE* saida = fopen(fileOut, "wt");
    FILE* entrada = fopen(fileIn, "rt");
    char palavra[STR_SIZE];
    int contador = 0;

    if(!saida || !entrada) return;

    while(fgets(palavra, STR_SIZE, entrada)){
        palavra[strcspn(palavra, "\n")] = 0;
        contador++;

        if(strcmp(palavra, "PARAR") != 0){
            fprintf(saida, "%s\n", palavra);
        }
    }

    printf("Linhas lidas: %d\n", contador);

    fclose(saida);
    fclose(entrada);
}

// ===================== E8 =====================
void e8(const char *fileName){
    FILE* arquivo = fopen(fileName, "at");
    char palavra[STR_SIZE];

    if(!arquivo) return;

    printf("Adicionar palavras (PARAR para finalizar):\n");

    do{
        fgets(palavra, STR_SIZE, stdin);
        palavra[strcspn(palavra, "\n")] = 0;
        fprintf(arquivo, "%s\n", palavra);
    }while(strcmp(palavra, "PARAR") != 0);

    fclose(arquivo);
}

// ===================== E9 =====================
void e9(const char *fileName){
    FILE *arquivo = fopen(fileName, "rt");
    char palavra[STR_SIZE];

    if(!arquivo) return;

    while(fgets(palavra, STR_SIZE, arquivo)){
        palavra[strcspn(palavra, "\n")] = 0;

        if(strcmp(palavra, "PARAR") == 0) break;

        printf("%s\n", palavra);
    }

    fclose(arquivo);
}

// ===================== E10 =====================
bool e10(const char *fileName, const char *word){
    FILE* arquivo = fopen(fileName, "rt");
    char linha[STR_SIZE];

    if(!arquivo) return false;

    while(fgets(linha, STR_SIZE, arquivo)){
        linha[strcspn(linha, "\n")] = 0;

        if(strcmp(word, linha) == 0){
            fclose(arquivo);
            return true;
        }
    }

    fclose(arquivo);
    return false;
}