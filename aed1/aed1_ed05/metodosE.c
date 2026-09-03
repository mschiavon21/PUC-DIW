#include <stdio.h>
#include "io.h"

// ===================== METHOD 01 =====================
void method_01a(int x) {
    int y = 1;
    while (y <= x) {
        printf("Valor de y = %d\n", y);
        y++;
    }
}

void method_01() {
    IO_id("Method_01-0.0v");
    method_01a(5);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 02 =====================
void method_02a(int x) {
    int y = 1, z = 2;
    while (y <= x) {
        printf("%d:%d\n", y, z);
        y++;
        z += 2;
    }
}

void method_02() {
    IO_id("Method_02-0.0v");
    method_02a(5);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 03 =====================
void method_03a(int x) {
    int y = 1, z = 0;
    while (y <= x) {
        z = y * 2;
        printf("%d:%d\n", y, z);
        y++;
    }
}

void method_03() {
    IO_id("Method_03-0.0v");
    method_03a(5);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 04 =====================
void method_04a(int x) {
    int y = x, z;
    while (y > 0) {
        z = y * 2;
        printf("%d:%d\n", y, z);
        y--;
    }
}

void method_04() {
    IO_id("Method_04-0.0v");
    method_04a(5);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 05 =====================
void method_05a(int x) {
    for (int y = x; y > 0; y--) {
        printf("%d\n", y);
    }
}

void method_05() {
    IO_id("Method_05-0.0v");
    method_05a(5);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 06 =====================
int somarValores(int x) {
    int soma = 0;
    for (int y = 1; y <= x; y++) {
        printf("%d:%d\n", y, (2 * y));
        soma += (2 * y);
    }
    return soma;
}

void method_06() {
    int soma = somarValores(5);
    printf("Soma de valores pares = %d\n", soma);
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 07 =====================
double somarFracao1(int x) {
    double soma = 0.0;
    for (int y = 1; y <= x; y++) {
        printf("%d: 1/%d = %lf\n", y, (2 * y), 1.0 / (2 * y));
        soma += 1.0 / (2 * y);
    }
    return soma;
}

void method_07() {
    printf("Soma: %lf\n", somarFracao1(5));
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 08 =====================
double somarFracao2(int x) {
    double soma = 0.0;
    for (int y = 1; y <= x; y++) {
        printf("%d: 1/%d = %lf\n", y, (2 * y), 1.0 / (2 * y));
        soma += 1.0 / (2 * y);
    }
    return soma;
}

void method_08() {
    printf("Soma: %lf\n", somarFracao2(5));
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 09 =====================
double somarFracao3(int x) {
    double soma = 0.0;
    for (int y = 1; y <= x; y++) {
        printf("%d: %lf/%lf = %lf\n", y, (2.0*y), (2.0*y+1), (2.0*y)/(2.0*y+1));
        soma += (2.0*y)/(2.0*y+1);
    }
    return soma;
}

void method_09() {
    printf("Soma dos valores: %lf\n", somarFracao3(5));
    printf("Aperte ENTER para continuar");
    getchar();
}

// ===================== METHOD 10 =====================
int multiplicarValores(int x) {
    int produto = 1;
    for (int y = 1; y <= x; y++) {
        printf("%d:%d\n", y, (2*y - 1));
        produto *= (2*y - 1);
    }
    return produto;
}

void method_10() {
    printf("Produto = %d\n", multiplicarValores(5));
    printf("Aperte ENTER para continuar");
    getchar();
}