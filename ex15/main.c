#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5
int main()
{
    char *palavra;
    palavra = (char*) malloc(sizeof(char) * LENGTH);

    printf("Entre com o candidato a palíndromo de 5 caracteres: ");
    scanf("%s", palavra);
    fflush(stdin);

    for(int i = 0; i < LENGTH; i++)
    {
        if(palavra[i] != palavra[LENGTH - i - 1]){
            printf("Não é um palíndromo.");
            break;
        }
        i == 4 ? printf("É um palíndromo.") : 1;
    }

    return 0;
}
