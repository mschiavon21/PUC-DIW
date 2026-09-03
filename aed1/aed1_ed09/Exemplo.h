#include <stdio.h>
#include <stdbool.h>

//---------------------------------------------------------
// PRINT MATRIX
//---------------------------------------------------------

void printIntmatrix(int i, int j, int matrix[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            printf("%3d\t", matrix[x][y]);
        }
        printf("\n");
    }
}

//---------------------------------------------------------
// READ MATRIX
//---------------------------------------------------------

void readIntmatrix(int i, int j, int matrix[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            printf("Matriz[%d][%d]: ", x, y);
            scanf("%d", &matrix[x][y]);
        }
    }
}

//---------------------------------------------------------
// WRITE MATRIX TO FILE
//---------------------------------------------------------

void fprintIntmatrix(char fileName[],
                     int i,
                     int j,
                     int matrix[][j])
{
    FILE *arquivo = fopen(fileName, "wt");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    fprintf(arquivo, "%d\n", i);
    fprintf(arquivo, "%d\n", j);

    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            fprintf(arquivo, "%d\n", matrix[x][y]);
        }
    }

    fclose(arquivo);
}

//---------------------------------------------------------
// READ ROWS
//---------------------------------------------------------

int freadmatrixrows(char fileName[])
{
    FILE *arquivo = fopen(fileName, "rt");

    if(arquivo == NULL)
    {
        printf("Arquivo inexistente!\n");
        return 0;
    }

    int n = 0;

    fscanf(arquivo, "%d", &n);

    fclose(arquivo);

    return n;
}

//---------------------------------------------------------
// READ COLUMNS
//---------------------------------------------------------

int freadmatrixcolumns(char fileName[])
{
    FILE *arquivo = fopen(fileName, "rt");

    if(arquivo == NULL)
    {
        printf("Arquivo inexistente!\n");
        return 0;
    }

    int rows = 0;
    int cols = 0;

    fscanf(arquivo, "%d", &rows);
    fscanf(arquivo, "%d", &cols);

    fclose(arquivo);

    return cols;
}

//---------------------------------------------------------
// READ MATRIX FROM FILE
//---------------------------------------------------------

void freadintmatrix(char fileName[],
                    int i,
                    int j,
                    int matrix[][j])
{
    FILE *arquivo = fopen(fileName, "rt");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    int rows = 0;
    int cols = 0;

    fscanf(arquivo, "%d", &rows);
    fscanf(arquivo, "%d", &cols);

    if(rows != i || cols != j)
    {
        printf("Dimensoes invalidas!\n");
        fclose(arquivo);
        return;
    }

    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            fscanf(arquivo, "%d", &matrix[x][y]);
        }
    }

    fclose(arquivo);
}

//---------------------------------------------------------
// COPY MATRIX
//---------------------------------------------------------

void copyintmatrix(int i,
                   int j,
                   int copy[][j],
                   int matrix[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            copy[x][y] = matrix[x][y];
        }
    }
}

//---------------------------------------------------------
// TRANSPOSE MATRIX
//---------------------------------------------------------

void transposeintmatrix(int i,
                        int j,
                        int matrix2[][i],
                        int matrix1[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            matrix2[y][x] = matrix1[x][y];
        }
    }
}

//---------------------------------------------------------
// CHECK IDENTITY MATRIX
//---------------------------------------------------------

bool isidentity(int i,
                int j,
                int matrix[][j])
{
    if(i != j)
    {
        return false;
    }

    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            if(x == y)
            {
                if(matrix[x][y] != 1)
                {
                    return false;
                }
            }
            else
            {
                if(matrix[x][y] != 0)
                {
                    return false;
                }
            }
        }
    }

    return true;
}

//---------------------------------------------------------
// CHECK EQUALITY
//---------------------------------------------------------

bool isequal(int i,
             int j,
             int matrix1[][j],
             int matrix2[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            if(matrix1[x][y] != matrix2[x][y])
            {
                return false;
            }
        }
    }

    return true;
}

//---------------------------------------------------------
// ADD MATRICES
//---------------------------------------------------------

void addintmatrix(int i,
                  int j,
                  int matrix3[][j],
                  int matrix1[][j],
                  int k,
                  int matrix2[][j])
{
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            matrix3[x][y] =
                matrix1[x][y] +
                k * matrix2[x][y];
        }
    }
}

//---------------------------------------------------------
// MULTIPLY MATRICES
//---------------------------------------------------------

void mullintmatrix(
    int i3, int j3, int matrix3[][j3],
    int i1, int j1, int matrix1[][j1],
    int i2, int j2, int matrix2[][j2]
)
{
    if(j1 != i2 || i3 != i1 || j3 != j2)
    {
        printf("ERRO: Dimensoes invalidas!\n");
        return;
    }

    for(int x = 0; x < i3; x++)
    {
        for(int y = 0; y < j3; y++)
        {
            int soma = 0;

            for(int z = 0; z < j1; z++)
            {
                soma += matrix1[x][z] *
                        matrix2[z][y];
            }

            matrix3[x][y] = soma;
        }
    }
}

//---------------------------------------------------------
// MAIN
//---------------------------------------------------------

int main()
{
    //-----------------------------------------------------
    // MATRIZ 1
    //-----------------------------------------------------

    int matrix1[2][2] =
    {
        {1,2},
        {3,4}
    };

    //-----------------------------------------------------
    // MATRIZ 2
    //-----------------------------------------------------

    int matrix2[2][2] =
    {
        {1,0},
        {0,1}
    };

    //-----------------------------------------------------
    // MATRIZ RESULTADO
    //-----------------------------------------------------

    int matrix3[2][2] =
    {
        {0,0},
        {0,0}
    };

    //-----------------------------------------------------
    // PRINT
    //-----------------------------------------------------

    printf("Matriz 1\n");
    printIntmatrix(2,2,matrix1);

    printf("\nMatriz 2\n");
    printIntmatrix(2,2,matrix2);

    //-----------------------------------------------------
    // SOMA
    //-----------------------------------------------------

    addintmatrix(2,2,matrix3,matrix1,-1,matrix2);

    printf("\nMatriz 3 = Matrix1 - Matrix2\n");
    printIntmatrix(2,2,matrix3);

    //-----------------------------------------------------
    // MULTIPLICACAO
    //-----------------------------------------------------

    mullintmatrix(
        2,2,matrix3,
        2,2,matrix1,
        2,2,matrix2
    );

    printf("\nMatrix3 = Matrix1 * Matrix2\n");
    printIntmatrix(2,2,matrix3);

    //-----------------------------------------------------
    // IDENTIDADE
    //-----------------------------------------------------

    printf("\nIsIdentity(matrix2) = %d\n",
           isidentity(2,2,matrix2));

    //-----------------------------------------------------
    // IGUALDADE
    //-----------------------------------------------------

    printf("\nIsEqual(matrix1,matrix2) = %d\n",
           isequal(2,2,matrix1,matrix2));

    //-----------------------------------------------------
    // COPY
    //-----------------------------------------------------

    copyintmatrix(2,2,matrix3,matrix1);

    printf("\nCopia de Matrix1\n");
    printIntmatrix(2,2,matrix3);

    //-----------------------------------------------------
    // TRANSPOSTA
    //-----------------------------------------------------

    int matrix4[2][2];

    transposeintmatrix(2,2,matrix4,matrix1);

    printf("\nTransposta Matrix1\n");
    printIntmatrix(2,2,matrix4);

    //-----------------------------------------------------
    // FILE
    //-----------------------------------------------------

    fprintIntmatrix("MATRIX1.TXT",
                    2,
                    2,
                    matrix1);

    printf("\nMatriz salva em MATRIX1.TXT\n");

    //-----------------------------------------------------
    // READ FILE
    //-----------------------------------------------------

    int rows = freadmatrixrows("MATRIX1.TXT");
    int cols = freadmatrixcolumns("MATRIX1.TXT");

    int matrix5[rows][cols];

    freadintmatrix("MATRIX1.TXT",
                   rows,
                   cols,
                   matrix5);

    printf("\nMatriz lida do arquivo\n");
    printIntmatrix(rows,cols,matrix5);

    return 0;
}