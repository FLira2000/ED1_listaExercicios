#include <stdio.h>
#include <stdlib.h>
#define MTXLEN 2

int main()
{
    int mtx[MTXLEN][MTXLEN], mt1[MTXLEN][MTXLEN], mt2[MTXLEN][MTXLEN];
    int val1[MTXLEN * 2];
    int val2[MTXLEN * 2];

    int aux = 0;
    for (int i = 0; i < MTXLEN; i++)
    {
        for (int j = 0; j < MTXLEN; j++)
        {
            scanf("%d", &aux);
            mt1[i][j] = aux;
        }
    }
    aux = 0;
    for (int i = 0; i < MTXLEN; i++)
    {
        for (int j = 0; j < MTXLEN; j++)
        {
            scanf("%d", &aux);
            mt2[i][j] = aux;
        }
    }
    aux = 0;
    for (int i = 0; i < MTXLEN; i++)
    {
        for (int j = 0; j < MTXLEN; j++)
        {
            val1[aux] = mt1[i][j];
            aux++;
        }
    }

    aux = 0;
    for (int i = 0; i < MTXLEN; i++)
    {
        for (int j = 0; j < MTXLEN; j++)
        {
            val2[aux] = mt2[i][j];
            aux++;
        }
    }

    int h1, h2, h11, h22;
    for (int i = 0; i < MTXLEN * 2; i++)
    {
        if (h1 < val1[i])
            h1 = val1[i];
        if (h11 < val2[i])
            h11 = val2[i];
    }

    for (int i = 0; i < MTXLEN * 2; i++)
    {
        if (val1[i] != h1 && h2 < val1[i])
            h2 = val1[i];
        if (val2[i] != h11 && h22 < val2[i])
            h22 = val2[i];
    }

    mtx[0][0] = h1;
    mtx[0][1] = h2;
    mtx[1][0] = h11;
    mtx[1][1] = h22;

    printf("Valores da matriz final: \n");
    for (int i = 0; i < MTXLEN; i++)
        for (int j = 0; j < MTXLEN; j++)
        {
            printf("Posicao [%d][%d] = %d\n", i, j, mtx[i][j]);
        }

    return 0;
}
