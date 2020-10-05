#include <stdio.h>
#include <stdlib.h>
#define LENTGH 3
#define SIZE 64
/* Ler os dados de 10 produtos de uma mercearia e escrever os nomes e os
preços daqueles cujas quantidades em estoque estão abaixo do valor
mínimo. Os dados dos produtos são: código, descrição, quantidade em
estoque, quantidade mínima e preço. */

typedef struct produtoMercado {
    int codigo;
    char *nome;
    char *descricao;
    int quantidade;
    int quantMinima;
    float preco;
} Item;

char* setString(char *s, int size){
    char *t = (char*) malloc(sizeof(char)*size);
    char *temp = t;
    while(*s){
        *t++ = *s++;
    }
    *t = 0;
    return temp;
}

int main()
{
    Item prod[LENTGH];
    char tmp[SIZE];
    for(int i = 0; i < LENTGH; i++)
    {
        printf("Entre com o codigo do produto: ");
        scanf("%d", &prod[i].codigo);
        printf("Entre com o nome do produto: ");
        scanf("%s", tmp);
        prod[i].nome = setString(tmp, SIZE);
        printf("Entre com a descricao do produto: ");
        scanf("%s", tmp);
        prod[i].descricao = setString(tmp, SIZE);
        printf("Entre com a quantidade minima possivel do produto: ");
        scanf("%d", &prod[i].quantMinima);
        printf("Entre com a quandidade atual do produto: ");
        scanf("%d", &prod[i].quantidade);
        printf("Entre com o preco do produto: ");
        scanf("%f", &prod[i].preco);
    }

    for(int i = 0; i < LENTGH; i++)
        if(prod[i].quantidade < prod[i].quantMinima)
            printf("%s está em falta.\n", prod[i].nome);

    return 0;
}
