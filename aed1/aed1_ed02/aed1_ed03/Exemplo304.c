/* 
   Exemplo0300 - v0.0. - 18 / 03 / 2026
   Author: 1649051_miguel_schiavon
*/ 
// dependencias 
#include "io.h"  // para definicoes proprias 
 
/** 
   Method_00 - nao faz nada. 
 */ 
void method_00 ( void ) 
{ 
 // nao faz nada 
} // end method_00 ( ) 
 
/** 
   Method_01 - Repeticao com teste no inicio. 
 */ 
void method_01 ( void ) 
{ 
 // definir dado 
    int x = 0; 
 
 // identificar 
    IO_id ( "Method_01 - v0.0" ); 
 
 // ler do teclado o valor inicial 
    x = IO_readint ( "Entrar com uma quantidade: " ); 
 
 // repetir (x) vezes 
    while ( x > 0 ) 
    { 
     // mostrar valor atual 
        IO_println ( IO_toString_d ( x ) ); 
     // passar ao proximo valor 
        x = x - 1; 
    } // end while 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_01 ( )

/** 
   Method_02 - Repeticao com teste no inicio. 
 */ 
void method_02 ( void ) 
{ 
 // definir dado 
    int x = 0; 
    int y = 0; 
 
 // identificar 
    IO_id ( "Method_02 - v0.0" ); 
 
 // ler do teclado 
    x = IO_readint ( "Entrar com uma quantidade: " ); 
 
 // repetir (x) vezes 
    y = x;  // copiar o valor lido (e' melhor) 
    while ( y > 0 ) 
    { 
     // mostrar valor atual 
        IO_println ( IO_toString_d ( x ) ); 
     // passar ao proximo valor 
        y = y - 1; 
    } // end while 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_02 ( )

/** 
   Method_03 - Repeticao com teste no inicio. 
 */ 
void method_03 ( void ) 
{ 
 // definir dado 
    int x = 0; 
    int y = 0; 
 
 // identificar 
    IO_id ( "Method_03 - v0.0" ); 
 
 // ler do teclado 
    x = IO_readint ( "Entrar com uma quantidade: " ); 
 
 // repetir (x) vezes 
    y = 1;  // o valor lido devera' ser preservado 
    while ( y <= x ) 
    { 
     // mostrar valor atual 
        IO_printf ( "%d\n", y ); 
     // passar ao proximo valor 
        y = y + 1; 
    } // end while 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_03 ( )

/** 
   Method_04 - Repeticao com teste no inicio e variacao. 
 */ 
void method_04 ( void ) 
{ 
 // definir dado 
    int x = 0; 
    int y = 0; 
    int z = 0; 
 
 // identificar 
    IO_id ( "Method_04 - v0.0" ); 
 
 // ler do teclado 
    x = IO_readint ( "Entrar com uma quantidade: " );
     // repetir (x) vezes 
 //        inicio    teste   variacao 
    for ( y  = 1; y <= x; y = y + 1 ) 
    { 
     // ler valor do teclado 
        z = IO_readint ( "Valor = " ); 
     // mostrar valor atual 
        IO_printf ( "%d. %d\n", y, z ); 
    } // end for 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_04 ( )



/* 
  Funcao principal. 
  @return codigo de encerramento 
*/ 
int main ( ) 
{ 
 // definir dado 
    int x = 0; 
 
 // repetir até desejar parar 
    do 
    { 
     // identificar 
        IO_id ( "EXEMPLO0300 - Programa - v0.0" ); 
 
     // ler do teclado 
        IO_println ( "Opcoes"  ); 
        IO_println ( "0 - parar" ); 
        IO_println ( "1 - repeticao com teste no inicio" ); 
        IO_println ( "" ); 
 
        x = IO_readint ( "Entrar com uma opcao: " ); 
 
     // testar valor 
        switch ( x ) 
        { 
          case 0:  method_00 ( );   break; 
          case 1:  method_01 ( );   break; 
          default: 
            IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (", 
                                IO_concat ( IO_toString_d ( x ), ")" ) ) ); 
        } // end switch 
    } 
    while ( x != 0 ); 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para terminar" ); 
    return ( 0 ); 
} // end main ( ) 