#include"io.h"

void m1(chars fileName, int y){
FILE* arquivo = fopen(fileName, "wt");
int z = 1;
while(z <= y){
fprintf(arquivo, "%d\n", 5*(2*z-1));
z++;


}

fclose(arquivo);

}





void method_01(){

int x = 0;
printf("%s", "Insira uma quantidade de termos: ");
scanf("%d", &x); getchar();
m1("DADOS1.TXT", x);

printf("%s", "Aperte ENTER para continuar");
getchar();
    

}

void m2(chars fileName, int x){
FILE *arquivo = fopen(fileName, "wt");
int y = 0;
y = x;
while(y > 0){

fprintf(arquivo, "%d\n", 3*(2*y));


y--;

}

fclose(arquivo);

}



void method_02(){

int x = 0;
printf("%s", "Insira uma quantidade de termos: ");
scanf("%d", &x);getchar();
m2("MULTIPLOS3.TXT" ,x);

printf("%s", "Aperte ENTER para continuar");
getchar();

}


void m3(chars fileName, int x){
FILE *arquivo = fopen(fileName, "wt");
    int y = 0;
while(y <= x){
if(y == 0){

y = y + 1;

fprintf(arquivo, "%d\n", y);
}

fprintf(arquivo, "%.2lf\n", pow(3,y));
y++;
}

fclose(arquivo);

}



void method_03(){
int x = 0;
printf("%s", "Insira uma quantidade de termos: ");
scanf("%d", &x);getchar();
m3("DADOS3.TXT", x);

printf("%s", "Aperte ENTER para continuar");
getchar();

}

void m4(chars fileName, int x){
FILE* arquivo = fopen(fileName, "wt");
int y = x;
while(y >=0){

fprintf(arquivo, "%lf\n", 1/pow(5,y));
y --;
}

fprintf(arquivo, "%d\n", 1);

fclose(arquivo);


}


void method_04(){
int qtd = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &qtd);getchar();

m4("DADOS4.TXT", qtd);





printf("%s", "Aperte ENTER para continuar");
getchar();




}



void m5(chars fileName, int x, double y){
FILE* arquivo = fopen(fileName, "wt");
int z = 1;
while(z <= x){

fprintf(arquivo, "%lf\n", 1.0/pow(y, 2*z-1));


z++;
}

fclose(arquivo);
}


void method_05(){
int x = 0;
double y = 0.0;
printf("%s\n", "Insira uma quantidade: ");
scanf("%d", &x);getchar();
printf("%s\n", "Insira um numero: ");
scanf("%lf", &y);getchar();
m5("DADOS5.TXT", x, y);


printf("%s", "Aperte ENTER para continuar");
getchar();

}



void m6(chars fileOut, chars fileIn, int x){
FILE* saida = fopen(fileOut, "wt");
FILE * entrada = fopen(fileIn, "rt");
int y = 1;
double z = 0.0;
while(y <= x){
 
fscanf(entrada, "%lf", &z);

fprintf(saida, "%lf\t+%d\n", z+y, y);
printf("%lf\t+%d\n", z+y, y);
y++;
}


fclose(saida);
fclose(entrada);



}







void method_06(){
int x = 0;
printf("%s", "Insira uma quantidade de termos: ");
scanf("%d", &x);getchar();
m6("RESULTADO6.txt", "DADOS5.TXT", x);



printf("%s", "Aperte ENTER para continuar");
getchar();

}

void m7(chars fileOut, chars fileIn, int x){
FILE* saida = fopen(fileOut, "wt");
FILE* entrada = fopen(fileIn, "rt");
double z = 0.0;
double soma = 0.0;
int y = 1;
    while(y<=x){
fscanf(entrada, "%lf", &z);
printf("%lf\n", z);
fprintf(saida, "%lf\n", z);
y++;
soma = soma + z;
    }
    
fprintf(saida, "%lf\n", soma);
printf("%lf\n", soma);

fclose(saida);
fclose(entrada);
}



void method_07(){
int x = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &x);getchar();

m7("RESULTADO07.TXT", "DADOS4.TXT", x);




printf("%s", "Aperte ENTER para continuar");
getchar();

}



void m8c(chars fileIn, chars fileOut, chars guardar ,int y){
FILE* entrada = fopen(fileIn, "rt");
FILE* saida = fopen(fileOut, "wt");
FILE * store = fopen(guardar, "wt");
int z = 0;
int soma = 0;
int a = 1;
while(a <= y){

fscanf(entrada, "%d", &z);
fprintf(store, "%d\n", z);
soma = soma + z;
fprintf(saida, "%d\n", soma);

printf("%d\n", soma);

a++;
}

fclose(entrada);
fclose(saida);
fclose(store);

}








int m8b(chars fileName,int x){
FILE * arquivo = fopen(fileName, "at");

fprintf(arquivo, "%d\n", x);
printf("%d\n", x);




fclose(arquivo);


return(fileName, x);
}





int m8a(int x){

if(x>0){
if(x == 0 || x == 1 ){


return 1;

}//end if

return m8a(x-1)+ m8a(x-2);
}//end if



}//end m8a



void method_08(){
int x = 0;
int fib = 0;
int soma = 0;
printf("%s", "Insira uma quantidade: ");
scanf("%d", &x);getchar();
for(int i = 1; i <= x; i++){

soma = m8a(i*3);
m8b("DADOS8.txt",soma);
m8c("DADOS8.txt", "RESULTADO8.TXT", "DADOS8.TXT" ,x);
}//end for

FILE* arquivo = fopen("DADOS8.txt", "wt");
fprintf(arquivo, "%d", 0);
fclose(arquivo);

//encerrar


printf("%s", "Aperte ENTER para continuar");
getchar();

}


int m9a(chars fileIn, chars fileOut, int qtd){
FILE* entrada = fopen(fileIn, "rt");
FILE* saida = fopen(fileOut, "wt");
char z = 0;
int a = 0;
while(a < qtd*2){

fscanf(entrada, "%c", &z);

fprintf(saida, "%c", z);



a++;
}//end while

fprintf(saida, "quantidade = %d", qtd);


fclose(saida);
fclose(entrada);
}






int m9(chars fileName, chars palavra, int x){
FILE* arquivo = fopen(fileName, "wt");
char z = ' ';
int a = 0;
int contador = 0;
while(a < x){

z = palavra[a];
if('A'<= z && z <='Z'){

fprintf(arquivo, "%c\n", z);

contador = contador + 1;

}//end if

a++;
}//end while


fclose(arquivo);
return(contador);

}






void method_09(){
char palavra[80] = "";
int tamanho = 0;
int quantidade = 0;
printf("%s", "Escolha uma frase: ");
fgets(palavra, sizeof(palavra), stdin);
tamanho = strlen(palavra); 

quantidade = m9("DADOS9.TXT",palavra, tamanho);

m9a("DADOS9.TXT", "RESULTADO9.TXT", quantidade);
printf("%d\n", quantidade);


//encerrar


printf("%s", "Aperte ENTER para continuar");
getchar();


}

void m10a(chars fileIn, chars fileOut, int qtd){
FILE * entrada = fopen(fileIn, "rt");
FILE * saida = fopen(fileOut, "wt");
int a = 0;
char z = ' ';
while(a < qtd*2){

fscanf(entrada, "%c", &z);

fprintf(saida, "%c", z);

a++;
}// end while

fprintf(saida, "quantidade = %d", qtd);

fclose(entrada);
fclose(saida);

}



int m10(chars fileName, chars palavra,int x){
FILE* arquivo = fopen(fileName, "wt");
char z = ' ';
int a = 0;
int contador = 0;
while(a< x){

z = palavra[a];
if('3'<=z && z<='9'){

fprintf(arquivo, "%c\n", z);
printf("%c\n", z);
contador = contador + 1;
}//end if



a++;
}//end while


fclose(arquivo);

return(contador);


}//end m10





void method_10(){
char palavra[80] = "";
int tamanho = 0;
int qtd = 0;
printf("%s", "Escolha uma frase/palavra: ");
fgets(palavra, sizeof(palavra), stdin);
tamanho = strlen(palavra);

qtd = m10("DADOS10.TXT", palavra ,tamanho);

m10a("DADOS10.TXT", "RESULTADO10.TXT", qtd);






printf("%s", "Aperte ENTER para continuar");
getchar();

}