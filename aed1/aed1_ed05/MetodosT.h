#include <stdio.h>
#include "io.h"
#include "math.h"

void f1(int x){

int y = 0;
int z = 3;
for(int i = 1; i <=x; i++){

y = z* i;
printf("%s%d\n", "multiplos de 3: ",y);


}//end for


}//end f1








void method_01(){
int quantidade = 0;
printf("%s", "Insira um numero de vezes: ");
scanf("%d", &quantidade);getchar();
f1(quantidade);


printf("%s", "Aperte ENTER para continuar");
getchar();

}

void f2(int x ){

int y = 0;
int z = 15;
for(int i = 1; i <=x; i++){


y = z * i;
printf("%s:%d\n","Numeros multiplos de 3 e 5: ", y);





}





}



void method_02(){
int quantidade = 0;
printf("%s", "Insira um numero de vezes: ");
scanf("%d", &quantidade);getchar();
f2(quantidade);

//encerrar metodo
printf("%s", "Aperte ENTER para continuar");
getchar();


}

void f3(int x){

int y = 0;
int z = 3;
for(int i = x; i > 0; i --){


y = pow(z, i);
printf("%s:%d\n","Potencias de 3 decrescente: ", y);


}





}



void method_03(){

    int quantidade = 0;
    printf("%s", "Insira uma quantidade: ");
    scanf("%d", &quantidade);getchar();
    f3(quantidade);
    //encerrar
    printf("Aperte ENTER para continuar");getchar();
}



void f4 (int x ){
float y = 0.0f;
int z = 3;
for(int i = 1; i <= x; i++){


y = pow(z * i, -1);
printf("%s:%.2f\n", "Multiplos inversos de 3: ", y);

}//end for



}


void method_04(){
int quantidade = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &quantidade);getchar();
f4(quantidade);

//encerrar
printf("Aperte ENTER para continuar");
getchar();
}



void f5(int x){

double y = 0.0;
double z = 0.0;
printf("Escolha um valor para inserir as potencias pares:");
scanf("%lf", &z);getchar();
for(int i = 1; i <=x; i++){

if( i % 2 == 0){

y = pow(z, i);

printf("%s:%lf[%d]\n", "Potencias pares", y, i);


}




}



}




void method_05(){

int quantidade = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &quantidade);getchar();
f5(quantidade);

//encerrar
printf("Aperte ENTER para continuar");
getchar();





}


void f6(int x){

if(x % 5 != 0){

    printf("%s:%d\n", "Numeros multiplos de 3 e nao de 5: ", x);
}//end if




}



void method_06(){
int quantidade = 0;
int x = 3;
int y = 0;
printf("%s", "Insira a quantidade:");
scanf("%d", &quantidade);getchar();
for(int i = 1; i <=quantidade; i++){

y = x * i;
f6(y);
}//end for

//encerrar
printf("Aperte ENTER para continuar");
getchar();

}


void f7(int x){
int y = 4;
int z =0;
float soma = 0.0f;
for(int i = 1; i<= x; i++){
z = y*i;
if(z % 5 != 0){
    
    soma = soma +1.0/z;
}//end if



}//end for


printf("%s%f\n","Soma dos multiplos de 4 e nao de 5: ", soma);
}




void method_07()
{
int quantidade = 0;
printf("%s", "Insira a quantidade:");
scanf("%d", &quantidade);getchar();
f7(quantidade);
//encerrar funcao
printf("%s", "Aperte ENTER para continuar");
getchar();


}


void f8(int x ){
int y = 0;
int soma = 0;
for(int i = 1; i<= x; i++){

y = i +4;
soma = soma + y;



}

printf("%s%d \n","Soma dos numeros naturais >= 5 " ,soma);

}


void method_08(){
int quantidade = 0;
printf("Insira uma quantidade de termos: ");
scanf("%d", &quantidade);
f8(quantidade);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();




}




void f9(int x ){
int y = 0;
int z = 0;
int soma = 0;
for(int i =1; i <= x; i++){

y = i + 2;
z = pow(y, 2);
soma = soma + z;
}


printf("%s%d\n", "Soma dos quadrados comecando por 9: ", soma);
}



void method_09(){
int quantidade = 0;
printf("%s", "Insira uma quantidade de termos: ");
scanf("%d", &quantidade);getchar();
f8(quantidade);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();




}

void f10(int x){
float y = 0;
float soma = 0;
for(int i = x; i>=3; i--){

y = 1.0/ i;

soma = soma + y;


}

printf("%s%d%s%f\n", "Soma dos inversos de " , x, " ate 3: ", soma );

}


void method_10(){
int numero = 0;
do{
printf("%s", "Escolha um numero para definir como o começo: ");
scanf("%d", &numero);
if(numero < 3){
    printf("%s\n", "Insira um numero maior que 3");
}
}while(numero < 3 );
f10(numero);
//encerrar funcao
printf("%s", "Aperte ENTER para continuar");
getchar();



}


void f11(int x ){
int resultado = 1;
for(int i = x; i>0; i--){

resultado = resultado * i;
}

printf("%s%d[%d]\n", "Fatorial de ", resultado, x);

}



void method_11(){

int numero = 0;
printf("%s", "Escolha um numero para printar o fatorial: ");
scanf("%d", &numero);getchar();
f11(numero);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();


}


int f12(int x ){
int resultado = 1;
for(int i = x; i >0; i--){

resultado = resultado * i;


}


return (resultado);

}//end f12




void method_12(){
int quantidade = 0;
printf("%s", "Escolha uma quantidade de termos: ");
scanf("%d", &quantidade);getchar();
double resultado = 1.0;
int y = 0.0;
int z = 0.0;
int fatorial = 0;
double fracao = 0.0;
for(int i = 1; i < quantidade; i++){


y = pow(2,i);
z = pow(3,i);
fatorial = f12(z);
printf("%d\n", fatorial);
fracao = y/fatorial;
resultado = resultado * (i+fracao);

}//end for

printf("%s%lf\n", "Multiplicacao dos fatoriais: ", resultado);  
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();
}
