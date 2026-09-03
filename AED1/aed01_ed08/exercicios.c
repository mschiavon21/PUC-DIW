#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "io.h"

// ===================== ENTRADAS =====================
int lerInt(char *msg) {
    int x;
    printf("%s", msg);
    scanf("%d", &x); getchar();
    return x;
}

void lerArray(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        printf("Valor (%d): ", i);
        scanf("%d", &array[i]); getchar();
    }
}

void lerIntervalo(int *inf, int *sup) {
    *inf = lerInt("Limite inferior: ");
    *sup = lerInt("Limite superior: ");
}

// ===================== ARQUIVOS =====================
int lerTamanhoArquivo(char *fileName) {
    FILE *arq = fopen(fileName, "rt");
    if (!arq) return 0;

    int n;
    fscanf(arq, "%d", &n);
    fclose(arq);
    return n;
}

void lerArquivo(char *fileName, int n, int array[]) {
    FILE *arq = fopen(fileName, "rt");
    if (!arq) return;

    fscanf(arq, "%d", &n);

    for (int i = 0; i < n; i++) {
        fscanf(arq, "%d", &array[i]);
    }

    fclose(arq);
}

// ===================== LOGICA =====================
int lerPares(int *n, int array[]) {
    int y = 0;
    for (int i = 0; i < *n; i++) {
        if (array[i] % 2 == 0) {
            array[y++] = array[i];
        }
    }
    *n = y;
    return y;
}

void gravarParesPositivos(int n, int array[], char *fileName) {
    FILE *arq = fopen(fileName, "wt");
    if (!arq) return;

    int y = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0 && array[i] > 0) {
            array[y++] = array[i];
        }
    }

    fprintf(arq, "%d\n", y);
    for (int i = 0; i < y; i++) {
        fprintf(arq, "%d\n", array[i]);
    }

    fclose(arq);
}

int gerarInt(int inf, int sup, char *fileName) {
    int qtd = lerInt("Quantidade: ");

    FILE *arq = fopen(fileName, "wt");
    if (!arq) return 0;

    srand(time(NULL));

    fprintf(arq, "%d\n", qtd);

    for (int i = 0; i < qtd; i++) {
        int num = inf + rand() % (sup - inf + 1);
        printf("%d\n", num);
        fprintf(arq, "%d\n", num);
    }

    fclose(arq);
    return qtd;
}

int acharMenorPar(int n, int array[]) {
    int menor = 0;
    bool achou = false;

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            if (!achou || array[i] < menor) {
                menor = array[i];
                achou = true;
            }
        }
    }
    return menor;
}

int maiorMultiplo3(int n, int array[]) {
    int maior = 0;
    bool achou = false;

    for (int i = 0; i < n; i++) {
        if (array[i] % 3 == 0 && array[i] % 5 != 0) {
            if (!achou || array[i] > maior) {
                maior = array[i];
                achou = true;
            }
        }
    }
    return maior;
}

int acharMedia(int n, int array[]) {
    int soma = 0;
    for (int i = 0; i < n; i++) soma += array[i];
    return soma / n;
}

bool ordenadoDecrescente(int n, int array[]) {
    for (int i = 1; i < n; i++) {
        if (array[i] > array[i - 1]) return false;
    }
    return true;
}

bool procurarValor(int n, int array[], int index, int valor) {
    for (int i = index; i < n; i++) {
        if (array[i] == valor) return true;
    }
    return false;
}

int procurarIndex(int n, int array[], int index, int valor) {
    for (int i = index; i < n; i++) {
        if (array[i] == valor) return i;
    }
    return -1;
}

int acharQuantos(int n, int array[], int index, int valor) {
    int cont = 0;
    for (int i = index; i < n; i++) {
        if (array[i] == valor) cont++;
    }
    return cont;
}

// ===================== METHODS =====================
void method_01() {
    int n = lerInt("Tamanho: ");
    if (n <= 0) return;

    int array[n];
    lerArray(n, array);

    n = lerPares(&n, array);

    printf("Pares:\n");
    for (int i = 0; i < n; i++) printf("%d\n", array[i]);

    getchar();
}

void method_02() {
    int n = lerInt("Tamanho: ");
    if (n <= 0) return;

    int array[n];
    lerArray(n, array);

    gravarParesPositivos(n, array, "DADOS2.TXT");
    getchar();
}

void method_03() {
    int inf, sup;
    lerIntervalo(&inf, &sup);
    gerarInt(inf, sup, "DADOS.TXT");
}

void method_04() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    printf("Menor par: %d\n", acharMenorPar(n, array));
    getchar();
}

void method_05() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    printf("Maior multiplo de 3: %d\n", maiorMultiplo3(n, array));
    getchar();
}

void method_06() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    printf("Media: %d\n", acharMedia(n, array));
    getchar();
}

void method_07() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    printf("Ordenado: %d\n", ordenadoDecrescente(n, array));
    getchar();
}

void method_08() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    int index = lerInt("Index: ");
    int valor = lerInt("Valor: ");

    printf("Existe: %d\n", procurarValor(n, array, index, valor));
    getchar();
}

void method_09() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    int index = lerInt("Index: ");
    int valor = lerInt("Valor: ");

    int pos = procurarIndex(n, array, index, valor);

    if (pos == -1)
        printf("Nao encontrado\n");
    else
        printf("Posicao: %d\n", pos);

    getchar();
}

void method_10() {
    int n = lerTamanhoArquivo("DADOS.TXT");
    int array[n];
    lerArquivo("DADOS.TXT", n, array);

    int index = lerInt("Index: ");
    int valor = lerInt("Valor: ");

    printf("Quantidade: %d\n", acharQuantos(n, array, index, valor));
    getchar();
}