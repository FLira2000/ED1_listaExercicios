#include <stdio.h>
#include <stdlib.h>

typedef struct aviao
{
    int num_voo;
    char tipo[24];
    char preco[34];
    int num_lugares;
}Aviao;

void voosFeeder(Aviao *a);
void voosPrint(Aviao *a);

int main()
{
    Aviao voos[30];

    voosFeeder(&voos[0]);
    voosFeeder(&voos[1]);

    voosPrint(&voos[0]);
    voosPrint(&voos[1]);

    return 0;
}

void voosFeeder(Aviao *a){
    char tmp[32];
    printf("Entre com o numero do voo: ");
    scanf("%d", &a->num_voo); /* trocar para fgets com stdin quando der*/
    printf("Entre com o tipo de voo: ");
    scanf("%s", &a->tipo); /* trocar para fgets com stdin quando der*/
    printf("Entre com o preco da passagem: ");
    scanf("%s", &a->preco); /* trocar para fgets com stdin quando der*/
    printf("Entre com o numero de lugares do voo: ");
    scanf("%d", &a->num_lugares);
}

void voosPrint(Aviao *a){
    printf("Numero do voo: %d\n", a->num_voo);
    printf("Tipo de voo: %s\n", &a->tipo);
    printf("Preco da passagem: %s\n", &a->preco);
    printf("Numero de lugares no voo: %d\n", a->num_lugares);
}
