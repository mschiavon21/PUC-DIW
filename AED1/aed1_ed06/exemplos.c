#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "io.h"

/*
@param x: quantidade de valores a serem mostrados
*/
void e1(int x){
    if(x > 0){
        printf("Valor = %d\n", x);
        e1(x-1);
    }
}

void example_01(){
    IO_id("Example_01-0.0v");
    e1(5);

    printf("Aperte ENTER para continuar\n");
    getchar();
}

void e2(int x){
    if(x > 0){
        printf("Valor = %d\n", x);
        e2(x-1);
    }
}

void example_02(){
    IO_id("Example_02-0.0v");
    e2(5);

    printf("Aperte ENTER para continuar\n");
    getchar();
}

void e3(int x){
    if(x > 0){
        printf("Valor = %d\n", x);
        getchar();
        e3(x-1);
        getchar();
    } else {
        printf("Valor = 1\n");
    }
}

void example_03(){
    IO_id("Example_03-0.0v");
    e3(5);

    printf("Aperte ENTER para continuar\n");
    getchar();
}

void e4(int x){
    if(x > 0){
        e4(x-1);
        printf("Valor = %d\n", 2*(x-1));
        getchar();
    } else {
        printf("Valor = 1\n");
    }
}

void example_04(){
    IO_id("Example_04-0.0v");
    e4(5);

    printf("Aperte ENTER para continuar\n");
    getchar();
}

void e5(int x){
    if(x > 0){
        e5(x-1);
        printf("%d\t%d\t%d\n", x, 2*(x-1), (2*(x-1)+1));
    } else {
        printf("%d\t%d\n", x, 1);
    }
}

void example_05(){
    IO_id("Example_05-0.0v");
    e5(5);

    printf("Aperte ENTER para continuar\n");
    getchar();
}

double e06(int x){
    double soma = 0.0;

    if(x > 1){
        soma = (2.0*(x-1))/(2.0*(x-1)+1) + e06(x-1);
        printf("%d\t%lf/%lf\n", x, (2.0*(x-1)), (2.0*(x-1)+1));
        getchar();
    } else {
        soma = 1.0;
        printf("%d: %lf\n", x, 1.0);
    }

    return soma;
}

void example_06(){
    double soma = e06(5);

    printf("Soma = %lf\n", soma);
    printf("Aperte ENTER para continuar\n");
    getchar();
}

double e7b(int x, int y, int z, double soma){
    if(x > 0){
        printf("%d: %d/%d\n", x, y, z);
        printf("Soma = %lf\n", soma);
        return e7b(x-1, y+2, z+2, soma + (1.0*y/z));
    }
    return soma;
}

double e7a(int x){
    if(x > 0){
        printf("%d: %lf\n", x, 1.0);
        return e7b(x-1, 2, 3, 1.0);
    }
    return 0.0;
}

void example_07(){
    double soma = e7a(5);

    printf("Soma = %lf\n", soma);
    printf("Aperte ENTER para continuar\n");
    getchar();
}

int e8(int x){
    int resposta = 1;

    if(x >= 10){
        resposta = 1 + e8(x/10);
    } else if(x < 0){
        resposta = e8(-x);
    }

    return resposta;
}

void example_08(){
    printf("digitos(%3d) = %d\n", 123, e8(123));
    printf("digitos(%3d) = %d\n", 1, e8(1));
    printf("digitos(%3d) = %d\n", -10, e8(-10));

    printf("Aperte ENTER para continuar\n");
    getchar();
}

int fibonacci(int x){
    if(x == 1 || x == 2){
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

void example_09(){
    for(int i = 1; i <= 5; i++){
        printf("fibonacci(%d) = %d\n", i, fibonacci(i));
    }

    printf("Aperte ENTER para continuar\n");
    getchar();
}

int e10(char cadeia[], int x){
    int resposta = 0;

    if(x < strlen(cadeia)){
        if('a' <= cadeia[x] && cadeia[x] <= 'z'){
            resposta = 1;
        }
        resposta += e10(cadeia, x+1);
    }

    return resposta;
}

void example_10(){
    printf("Minusculas (\"abc\") = %d\n", e10("abc", 0));
    printf("Minusculas (\"aBc\") = %d\n", e10("aBc", 0));
    printf("Minusculas (\"AbC\") = %d\n", e10("AbC", 0));

    printf("Aperte ENTER para continuar\n");
    getchar();
}