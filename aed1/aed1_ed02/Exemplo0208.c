/* 
   Exemplo0200 - v0.0. - 14 / 03 / 2026 
   Author: 1649051_miguel_schiavon 
    
   Para compilar em terminal (janela de comandos):  
   Windows: gcc -o exemplo0200        exemplo0200.c 
 
   Para executar em terminal (janela de comandos):  
   Windows:    exemplo0200 
 */ 

 // dependencias 
#include "io.h" // bibliotecas e outras definicoes 
 
/** 
  Method_01. 
*/ 
void method_01 ( void ) 
{ 
  // identificar 
    IO_id ( "Method_01 - Programa - v0.0" ); 
  // ler do teclado 
    x = IO_readint ( "Entrar com um valor inteiro: " ); 
 
 // testar valor 
    if ( x == 0 ) 
    { 
       IO_printf ( "%s (%d)\n", "Valor igual a zero", x ); 
    } 
    if ( x != 0 ) 
    { 
       IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x ); 
    } // end if 
  // encerrar 
     IO_pause ( "\nApertar ENTER para continuar.\n" ); 
} // end method_01 ( ) 
 
/* 
  Method_02. 
*/ 
void method_02 ( void ) 
{ 
 // definir dado 
    int x = 0;   // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_02 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readint ( "Entrar com um valor inteiro: " ); 
 
 // testar valor 
    if ( x == 0 ) 
    { 
       IO_printf ( "%s (%d)\n", "Valor igual a zero", x ); 
    } 
    else // equivalente a "caso diferente do já' testado" 
    { 
       IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x ); 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
 
} // end method_02 ( )

/* 
  Method_03. 
*/ 
void method_03 ( void ) 
{ 
 // definir dado 
    int x = 0;   // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_03 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readint ( "Entrar com um valor inteiro: " ); 
 
 // testar valor 
    if ( x == 0 ) 
    { 
       IO_printf ( "%s (%d)\n", "Valor igual a zero", x ); 
    } 
    else 
    { 
       IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x ); 
       if ( x > 0 ) 
       { 
          IO_printf ( "%s (%d)\n", "Valor maior que zero", x ); 
       } 
       else 
       { 
          IO_printf ( "%s (%d)\n", "Valor menor que zero", x ); 
       } // end if 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_03 ( )

/* 
  Method_04. 
*/ 
void method_04 ( void ) 
{ 
 // definir dado 
    double x = 0.0;  // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "EXEMPLO0204 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readdouble ( "Entrar com um valor real: " ); 
 
 // testar valor 
    if ( 1.0 <= x && x <= 10.0 ) 
    { 
       IO_printf ( "%s (%lf)\n", "Valor dentro do intervalo [1:10] ", x ); 
    } 
    else 
    { 
       IO_printf    ( "%s (%lf)\n", "Valor fora do intervalo [1:10] ", x ); 
       if ( x < 1.0 ) 
       { 
          IO_printf ( "%s (%lf)\n", "Valor abaixo do intervalo [1:10] ", x ); 
       } 
       else 
       { 
          IO_printf ( "%s (%lf)\n", "Valor acima  do intervalo [1:10]", x ); 
       } // end if 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_04 ( ) 

/* 
  Method_05. 
*/ 
void method_05 ( void ) 
{ 
 // definir dado 
    char x = '_';  // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_05 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readchar ( "Entrar com um caractere: " ); 
 
 // testar valor 
    if ( ('a' <= x) && (x <= 'z') ) 
    { 
       IO_printf ( "%s (%c)\n", "Letra minuscula", x ); 
    } 
    else 
    { 
       IO_printf ( "%s (%c)\n", "Valor diferente de minuscula", x ); 
       if ( ('A' <= x) && (x <= 'Z') ) 
       { 
          IO_printf ( "%s (%c)\n", "Letra maiuscula", x ); 
       } 
       else 
       { 
          if ( ('0' <= x) && (x <= '9') ) 
          { 
             IO_printf ( "%s (%c)\n", "Algarismo", x ); 
          } 
          else 
          { 
             IO_printf ( "%s (%c)\n", "Valor diferente de algarismo", x ); 
          } // end if 
       } // end if 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_05 ( ) 

/* 
  Method_06. 
*/ 
void method_06 ( void ) 
{ 
 // definir dado 
    char x = '_';  // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_06 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readchar ( "Entrar com um caractere: " );
 // testar valor 
    if ( ( 'a' <= x && x <= 'z' ) ||  // minuscula OU 
         ( 'A' <= x && x <= 'Z' ) )  // maiuscula 
    { 
       IO_printf ( "%s (%c)\n", "Letra", x ); 
    } 
    else 
    { 
       IO_printf ( "%s (%c)\n", "Valor diferente de letra", x ); 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_06 ( ) 

/* 
  Method_07. 
*/ 
void method_07 ( void ) 
{ 
 // definir dado 
    char x = '_';  // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_07 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readchar ( "Entrar com um caractere: " ); 
 
 // testar valor 
    if (  !  ( ( 'a' <= x && x <= 'z' ) ||  // NAO (minuscula OU 
                ( 'A' <= x && x <= 'Z' ) )  ) //           maiuscula) 
    { 
       IO_printf ( "%s (%c)\n", "Valor diferente de letra", x ); 
    } 
    else 
    { 
       IO_printf ( "%s (%c)\n", "Letra", x ); 
    } // end if 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_07 ( ) 

/* 
  Method_08. 
*/ 
void method_08 ( void ) 
{ 
 // definir dado 
    char x = '_';  // definir variavel com valor inicial 
 
 // identificar 
    IO_id ( "Method_08 - Programa - v0.0" ); 
 
 // ler do teclado 
    x = IO_readchar ( "Entrar com um caractere ['0','A','a']: " ); 
 
 // testar valor 
    switch ( x ) 
    { 
      case '0': 
        IO_printf ( "%s (%c=%d)\n", "Valor igual do simbolo zero", x, x ); 
       break; 
      case 'A': 
        IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra A", x, x ); 
       break; 
      case 'a': 
        IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra a", x, x ); 
       break; 
      default: // se nao alguma das opcoes anteriores 
        IO_printf ( "%s (%c=%d)\n", "Valor diferente das opcoes ['0','A','a']", x, x ); 
    } // end switch 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_08 ( ) 



/* 
  Funcao principal. 
  @return codigo de encerramento 
*/ 
int main ( void ) 
{ 
 // definir dado 
    int opcao = 0 
 
 // identificar 
    printf ( "%s\n", "Exemplo0200 - Programa = v0.0" ); 
    printf ( "%s\n", "Autor: 1649051_miguel_schiavon" ); 
    printf ( "\n" ); // mudar de linha
    
// acoes 
 
 // repetir 
    do 
    { 
     // para mostrar opcoes 
        printf ( "\n%s\n", "Opcoes:"          ); 
        printf ( "\n%s"   , "0 - Terminar"    ); 
        printf ( "\n%s"   , "1 - Method_01" ); 
        printf ( "\n" ); 
 
     // ler a opcao do teclado 
        printf  ( "\n%s", "Opcao = " ); 
        scanf  ( "%d", &opcao ); 
        getchar( );  // para limpar a entrada de dados 
 
     // para mostrar a opcao lida 
        printf  ( "\n%s%d", "Opcao = ", opcao ); 
 
    .// escolher acao dependente da opcao 
        switch ( opcao ) 
        { 
          case 0:  /* nao fazer nada */    break; 
          case 1:     method_01 ( );      break; 
          default: // comportamento padrao 
                           printf ( "\nERRO: Opcao invalida.\n" ); 
                           break; 
        } // end switch 
    } 
    while ( opcao != 0 ); 
 
 // encerrar 
    printf    ( "\n\nApertar ENTER para terminar." ); 
    getchar( );  // aguardar por ENTER 
    return   ( 0 ); // voltar ao SO (sem erros) 
} // end main ( ) 