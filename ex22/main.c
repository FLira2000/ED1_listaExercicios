#include <stdio.h>
#include <stdlib.h>
#define LENGTH 8
int main()
{
    int matrix[LENGTH][LENGTH];

    for(int i = 0; i < LENGTH; i++)
    {
        for(int j = 0; j < LENGTH; j++)
        {
            printf("Entre com o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < LENGTH; i++)
    {
        for(int j = 0; j < LENGTH; j++)
        {
            i < j ? matrix[i][j] = 0 : 1;
        }
    }
    system("clear");
    for(int i = 0; i < LENGTH; i++)
    {
        for(int j = 0; j < LENGTH; j++)
        {
            printf("[%d]", matrix[i][j]);
            j == (LENGTH -1) ? printf("\n") : 1;
        }
    }

1
    return 0;
}
