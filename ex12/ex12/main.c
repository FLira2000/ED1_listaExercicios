#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20
 /* Ler dois vetores de 20 posições e escrever outro vetor contendo, nas
posições pares os valores do primeiro e nas posições ímpares os valores do
segundo. */
int main()
{
    int vet1[LENGTH], vet2[LENGTH];
    int vetM[LENGTH * 2], auxCont = 0;

    for(int i = 0; i < LENGTH; i++){
        printf("Entre com valores para o primeiro vetor: (%d restantes)\n", (LENGTH-i));
        scanf("%d", &vet1[i]);
    }

    for(int i = 0; i < LENGTH; i++){
        printf("Entre com valores para o segundo vetor: (%d restantes)\n", (LENGTH-i));
        scanf("%d", &vet2[i]);
    }

    for(int i = 0; i < (LENGTH*2); i++){
        if (i % 2 == 0)
            vetM[i] = vet1[auxCont];
        else
        {
            vetM[i] = vet2[auxCont];
            auxCont++;
        }
    }

    printf("Mostrando os valores no novo vetor.\n");
    for(int i = 0; i < (LENGTH*2); i++){
        printf("Posicao [%d]: %d\n", i, vetM[i]);
    }

    return 0;
}
