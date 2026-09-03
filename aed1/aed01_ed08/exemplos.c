#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// ===================== UTIL =====================
void pause() {
    printf("Aperte ENTER para continuar...");
    getchar();
}

// ===================== PRINT =====================
void printIntArray(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, array[i]);
    }
}

// ===================== LEITURA =====================
void readIntArray(int n, int array[]) {
    printf("Digite %d valores:\n", n);

    for (int i = 0; i < n; i++) {
        printf("[%d]: ", i);
        scanf("%d", &array[i]);
        getchar();
    }
}

// ===================== ARQUIVO =====================
void fprintIntArray(char *fileName, int array[], int n) {
    FILE *arq = fopen(fileName, "wt");
    if (!arq) {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    fprintf(arq, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(arq, "%d\n", array[i]);
    }

    fclose(arq);
}

int freadArraySize(char *fileName) {
    FILE *arq = fopen(fileName, "rt");
    if (!arq) return 0;

    int n;
    fscanf(arq, "%d", &n);
    fclose(arq);

    return (n > 0 ? n : 0);
}

void freadIntArray(char *fileName, int n, int array[]) {
    FILE *arq = fopen(fileName, "rt");
    if (!arq) return;

    int total;
    fscanf(arq, "%d", &total);

    for (int i = 0; i < n && i < total; i++) {
        fscanf(arq, "%d", &array[i]);
    }

    fclose(arq);
}

// ===================== OPERACOES =====================
void copyIntArray(int n, int dest[], int src[]) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int sumIntArray(int n, int array[]) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += array[i];
    }

    return soma;
}

bool isAllZeros(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        if (array[i] != 0) return false;
    }
    return true;
}

void addIntArray(int n, int result[], int a[], int k, int b[]) {
    for (int i = 0; i < n; i++) {
        result[i] = a[i] + k * b[i];
    }
}

bool isEqual(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool searchArray(int value, int n, int array[]) {
    for (int i = 0; i < n; i++) {
        if (array[i] == value) return true;
    }
    return false;
}

// ===================== EXEMPLOS =====================
void example_01() {
    int array[] = {1, 2, 3, 4, 5};
    printIntArray(5, array);
    pause();
}

void example_02() {
    int n = 5;
    int array[n];
    readIntArray(n, array);
}

void example_03() {
    int n = 5;
    int array[n];

    readIntArray(n, array);
    fprintIntArray("ARRAY1.TXT", array, n);
}

void example_04() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) {
        printf("Erro!\n");
        return;
    }

    int array[n];
    freadIntArray("ARRAY1.TXT", n, array);

    printIntArray(n, array);
}

void example_05() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) return;

    int array[n], copia[n];

    freadIntArray("ARRAY1.TXT", n, array);
    copyIntArray(n, copia, array);

    printf("Original:\n");
    printIntArray(n, array);

    printf("Copia:\n");
    printIntArray(n, copia);
}

void example_06() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) return;

    int array[n];
    freadIntArray("ARRAY1.TXT", n, array);

    printf("Soma: %d\n", sumIntArray(n, array));
}

void example_07() {
    int a1[] = {0,0,0,0,0};
    int a2[] = {1,2,3,4,5};
    int a3[] = {1,2,0,4,5};

    printf("Array1 = %d\n", isAllZeros(5, a1));
    printf("Array2 = %d\n", isAllZeros(5, a2));
    printf("Array3 = %d\n", isAllZeros(5, a3));

    pause();
}

void example_08() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) return;

    int a[n], b[n], r[n];

    freadIntArray("ARRAY1.TXT", n, a);
    copyIntArray(n, b, a);

    addIntArray(n, r, a, -2, b);

    printIntArray(n, r);
    pause();
}

void example_09() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) return;

    int a[n], b[n];

    freadIntArray("ARRAY1.TXT", n, a);
    copyIntArray(n, b, a);

    printf("Iguais: %d\n", isEqual(n, a, b));

    b[0] *= -1;

    printf("Iguais apos alterar: %d\n", isEqual(n, a, b));

    pause();
}

void example_10() {
    int n = freadArraySize("ARRAY1.TXT");

    if (n <= 0) return;

    int array[n];
    freadIntArray("ARRAY1.TXT", n, array);

    printIntArray(n, array);

    printf("Buscar %d: %d\n", array[0], searchArray(array[0], n, array));
    printf("Buscar -1: %d\n", searchArray(-1, n, array));

    pause();
}