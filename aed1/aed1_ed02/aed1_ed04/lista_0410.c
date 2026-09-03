// 999999_AED1
#include "io.h" // deve ficar na mesma pasta do programa

/*
*/
void method_01 ( void )
{
    // definir dados/resultados
    char c = '0'; // definir com valor inicial
    // identificar
    printf("%s\n", "\nMetodo_01\n");
    // acoes
       // repetir enquanto (c == '1')
       c = '1';   // valor inicial para repetir
       while ( c == '1' )  //teste
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor (variacao)
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );       
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_02 ( void )
{
    // definir dados/resultados
    char c = '1';   // valor inicial
    // identificar
    printf("%s\n", "\nMetodo_02\n");
    // acoes
       // repetir
       while ( c != '0' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );       
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_03 ( void )
{
    // definir dados/resultados
    char c = '1';
    // identificar
    printf("%s\n", "\nMetodo_03\n");
    // acoes
       // repetir
       while ( c == '1' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if ( c < '0' || c > '1' )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = '1';   // insistir na repeticao
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_04 ( void )
{
    // definir dados/resultados
    char c = '1';
    // identificar
    printf("%s\n", "\nMetodo_04\n");
    // acoes
       // repetir
       while ( c == '1' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if ( c != '0' && c != '1' )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = '1';
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_05 ( void )
{
    // definir dados/resultados
    char c = '1';
    // identificar
    printf("%s\n", "\nMetodo_05\n");
    // acoes
       // repetir
       while ( c == '1' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if ( c != '0' and c != '1' )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = '1';
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_06 ( void )
{
    // definir dados/resultados
    char c = '1';
    // identificar
    printf("%s\n", "\nMetodo_06\n");
    // acoes
       // repetir
       while ( c == '1' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [0=Nao,1=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if ( not ( c == '0' or c == '1' ) )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = '1';
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_07 ( void )
{
    // definir dados/resultados
    char c = 'S';
    // identificar
    printf("%s\n", "\nMetodo_07\n");
    // acoes
       // repetir
       while ( c == 'S' || c == 's' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );       
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_08 ( void )
{
    // definir dados/resultados
    char c = 'S';
    // identificar
    printf("%s\n", "\nMetodo_08\n");
    // acoes
       // repetir
       while ( c == 'S' or c == 's' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if (   c < 'N' or
             ( 'N' < c and c < 'S' ) or
               c > 'S' )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = 'S';
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_09 ( void )
{
    // definir dados/resultados
    char c = 'S';
    // identificar
    printf("%s\n", "\nMetodo_09\n");
    // acoes
       // repetir
       while ( c == 'S' or c == 's' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        if ( not ( c == 'N' or c == 'n' or
                   c == 'S' or c == 's' ) )
        {
         // mostrar mensagem de erro
         printf ( "%s\n", "Erro: Valor invalido." );
         c = 'S';
        }
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_10 ( void )
{
    // definir dados/resultados
    char c = 'S';
    // identificar
    printf("%s\n", "\nMetodo_10\n");
    // acoes
       // repetir
       while ( c == 'S' )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        switch ( c )
        {
            case 'N':
            case 'n': 
            case 'S':
                  break;
            case 's':
                  c = 'S';
                  break;
            default:
            // mostrar mensagem de erro
               printf ( "%s\n", "Erro: Valor invalido." );
               c = 'S';
        } // end switch
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_11 ( void )
{
    // definir dados/resultados
    char c     = 'N' ;
    bool teste = true;
    // identificar
    printf("%s\n", "\nMetodo_11\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor valido
        switch ( c )
        {
            case 'N':
            case 'n': 
                  teste = false;
                  break;
            case 'S':
            case 's':
                  teste = true;
                  break;
            default:
            // mostrar mensagem de erro
               printf ( "%s\n", "Erro: Valor invalido." );
               teste = true;
        } // end switch
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_12 ( void )
{
    // definir dados/resultados
    char c     = 'N' ;
    bool teste = true;
    // identificar
    printf("%s\n", "\nMetodo_12\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_13 ( void )
{
    // definir dados/resultados
    char c     = 'N' ;
    bool teste = true;
    // identificar
    printf("%s\n", "\nMetodo_13\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( not ( c == 'N' or c == 'n' or c == 'S' or c == 's' ) )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
        }    
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_14 ( void )
{
    // definir dados/resultados
    char c     = 'N' ;
    bool teste = true;
    // identificar
    printf("%s\n", "\nMetodo_14\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( c != 'N' and c != 'n' and c != 'S' and c != 's' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
        }    
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_15 ( void )
{
    // definir dados/resultados
    char c     = 'N' ;
    bool teste = true;
    // identificar
    printf("%s\n", "\nMetodo_15\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // converter para maiusculas
        if ( c == 'n' ) { c = 'N'; }
        else
        if ( c == 's' ) { c = 'S'; }
        // testar se valor invalido
        if ( c != 'N' and c != 'S' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
        }    
        // testar se deve parar
        teste = not (c == 'N');
       } // end while
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_16 ( void )
{
    // definir dados/resultados
    char c        = 'N' ;
    bool teste    = true;
    int  contador = 0;
    // identificar
    printf("%s\n", "\nMetodo_16\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
        // contar repeticao feita mais uma vez
        contador = contador + 1;
       } // end while
       // mostrar a quantidade de vezes repetidas
       printf ( "\n%s%d%s\n", 
                "Foram repetidas ", contador, " vezes" );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_17 ( void )
{
    // definir dados/resultados
    char c         = 'N' ;
    bool teste     = true;
    int  contador  = 0;
    int  invalidos = 0;
    // identificar
    printf("%s\n", "\nMetodo_17\n");
    // acoes
       // repetir
       while ( teste )
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( c != 'N' and c != 'n' and c != 'S' and c != 's' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
         // contar mais um valor invalido
            invalidos = invalidos + 1;
        } // end if   
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
        // contar repeticao feita mais uma vez
        contador = contador + 1;
       } // end while
       // mostrar a quantidade de vezes repetidas
       printf ( "\n%s%d%s\n", 
                "Foram repetidas ", contador, " vezes" );
       // mostrar a quantidade de valores invalidos
       printf ( "%s%d\n", 
                "Valores invalidos = ", invalidos );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_18 ( void )
{
    // definir dados/resultados
    char c         = 'N' ;
    bool teste     = true;
    int  contador  = 0;
    int  invalidos = 0;
    // identificar
    printf("%s\n", "\nMetodo_18\n");
    // acoes
       // repetir com teste no fim
       do
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( c != 'N' and c != 'n' and c != 'S' and c != 's' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
         // contar mais um valor invalido
            invalidos = invalidos + 1;
        } // end if   
        // testar se deve parar
        teste = not (c == 'N' or c == 'n');
        // contar repeticao feita mais uma vez
        contador = contador + 1;
       }
       while ( teste );
       // mostrar a quantidade de vezes repetidas
       printf ( "\n%s%d%s\n", 
                "Foram repetidas ", contador, " vezes" );
       // mostrar a quantidade de valores invalidos
       printf ( "%s%d\n", 
                "Valores invalidos = ", invalidos );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_19 ( void )
{
    // definir dados/resultados
    char c         = 'N';
    int  contador  =  0 ;
    int  invalidos =  0 ;
    // identificar
    printf("%s\n", "\nMetodo_19\n");
    // acoes
       // repetir com teste no fim
       do
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( c != 'N' and c != 'n' and c != 'S' and c != 's' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
         // contar mais um valor invalido
            invalidos = invalidos + 1;
        } // end if   
        // contar repeticao feita mais uma vez
        contador = contador + 1;
       }
       while ( not (c == 'N' or c == 'n') );
       // mostrar a quantidade de vezes repetidas
       printf ( "\n%s%d%s\n", 
                "Foram repetidas ", contador, " vezes" );
       // mostrar a quantidade de valores invalidos
       printf ( "%s%d\n", 
                "Valores invalidos = ", invalidos );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_20 ( void )
{
    // definir dados/resultados
    char c         = 'N';
    int  contador  =  0 ;
    int  invalidos =  0 ;
    // identificar
    printf("%s\n", "\nMetodo_20\n");
    // acoes
       // repetir com teste no fim
       do
       {
        // mostrar valor
        printf ( "%s%c\n", "c = ", c );
        // passar ao proximo valor
        printf ( "%s", "Repetir [N=Nao,S=Sim]? " );
        scanf  ( "%c", &c ); getchar( );
        // testar se valor invalido
        if ( c != 'N' and c != 'n' and c != 'S' and c != 's' )
        {
         // mostrar mensagem de erro
            printf ( "%s\n", "Erro: Valor invalido." );
         // contar mais um valor invalido
            invalidos = invalidos + 1;
        } // end if   
        // contar repeticao feita mais uma vez
        contador = contador + 1;
       }
       while ( c != 'N' and c != 'n' );
       // mostrar a quantidade de vezes repetidas
       printf ( "\n%s%d%s\n", 
                "Foram repetidas ", contador, " vezes" );
       // mostrar a quantidade de valores invalidos
       printf ( "%s%d\n", 
                "Valores invalidos = ", invalidos );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

    
// ---

/*
   Acao principal.
*/
int main ( void )
{
    // definir dados
    int opcao = 0;
    // identificar
    printf("\n%s\n\n", "999999_AED1");
    // acoes
       // repetir
       do
       {
        // ler opcao do teclado
        printf ( "%s", "Qual a opcao? " );
        scanf  ( "%d", &opcao ); getchar( );
        // mostrar valor lido
        printf ( "%s%d\n", "opcao = ", opcao );
        // escolher opcao
        switch ( opcao )
        {
           case  0: /* nada */     break;
           case  1: method_01 ( ); break;
           case  2: method_02 ( ); break;
           case  3: method_03 ( ); break;
           case  4: method_04 ( ); break;
           case  5: method_05 ( ); break;
           case  6: method_06 ( ); break;
           case  7: method_07 ( ); break;
           case  8: method_08 ( ); break;
           case  9: method_09 ( ); break;
           case 10: method_10 ( ); break;
           case 11: method_11 ( ); break;
           case 12: method_12 ( ); break;
           case 13: method_13 ( ); break;
           case 14: method_14 ( ); break;
           case 15: method_15 ( ); break;
           case 16: method_16 ( ); break;
           case 17: method_17 ( ); break;
           case 18: method_18 ( ); break;
           case 19: method_19 ( ); break;
           case 20: method_20 ( ); break;
           default: printf ( "\n%s\n",
                           "ERRO: Opcao invalida.\n\n" );
            break;
        }
       } while ( opcao != 0 );
    // encerrar
    printf("%s\n", "\nApertar ENTER para terminar\n");
    getchar( );
	return ( 0 );
}
/*
    Teste e anotacoes
*/
