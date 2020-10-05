#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10
/* Ler um vetor de 20 posições e um valor X qualquer. Em seguida, buscar pelo
valor X no vetor lido e, se for encontrado, informar a posição. Caso contrário,
informar que o valor não foi encontrado.
 */

int main()
{
    int arr[LENGTH];
    int testVal = 0;

    for(int i = 0; i < LENGTH; i++){
        printf("Entre com um valor para a posição [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Entre com o valor para procurar no vetor: ");
    scanf("%d", &testVal);
    int flag = 0;
    for(int i = 0; i < LENGTH; i++){
        if(testVal == arr[i]){
            printf("Valor encontrado na posicao [%d]. \n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Valor não encontrado.");
    }

    return 0;
}
