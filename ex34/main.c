#include <stdio.h>
#include <stdlib.h>

typedef struct candidata
{
    int numInscricao;
    char *nome;
    float altura;
    float peso;
    char *naturalidade;
    char* estado;
} candidata;

typedef struct candidataWrapper
{
    candidata *this;
    struct candidataWrapper *next;
}candidataWrapper;

char* setString(char *s, int size){
    char *t = (char*) malloc(sizeof(char)*size);
    char *temp = t;
    while(*s){
        *t++ = *s++;
    }
    *t = 0;
    return temp;
}

candidataWrapper* newCandidataWrapper(candidata *c){
    candidataWrapper *cw = (candidataWrapper*) malloc(sizeof(candidataWrapper));
    if (cw == NULL) exit(-1);

    (*cw).next = NULL;
    (*cw).this = c;
    return cw;
}

void candidadatasAppend(candidataWrapper *a, candidataWrapper*n){
    candidataWrapper *tmp = newCandidataWrapper(a->this);
    tmp->next = n;
    a = tmp;
}

candidata* newCandidata(){
    candidata *c = (candidata*) malloc(sizeof(candidata));
    if (c == NULL) exit(-1);
    c->altura = 0.0;
    c->peso = 0.0;
    c->estado = setString(" ", 1);
    c->naturalidade = setString(" ", 1);
    c->numInscricao = 0;
    c->nome = setString("Candidato vazio", 16);
    return c;
}

void printCandidata( candidata *c ){
    printf("Numero de inscricao: %d\n: ", c->numInscricao);
    printf("Nome da candidata: %s\n", c->nome);
    printf("Naturalidade: %s\n", c->naturalidade);
    printf("Estado: %s\n", c->estado);
    printf("Altura: %f\t", c->altura);
    printf("Peso: %f\n", c->peso);
}

int main()
{
    candidataWrapper *c = newCandidataWrapper( newCandidata() );
    candidataWrapper *tmp = c;
    do{
        int temp;
        printf("Entre com o número de inscrição: ");
        scanf("%d", &temp);
        if(temp == -1) break;
        tmp->this->numInscricao = temp;
        printf("Entre com o nome da candidata: ");
        scanf("%s", tmp->this->nome);
        printf("Entre com a naturalidade da candidata: ");
        scanf("%s", tmp->this->naturalidade);
        printf("Entre com o estado da candidata: ");
        scanf("%s", tmp->this->estado);
        printf("Entre com a altura da candidata:");
        scanf("%f", &tmp->this->altura);
        printf("Entre com o peso da candidata: ");
        scanf("%f", &tmp->this->peso);
        printf("\n\n");

        tmp->next = newCandidataWrapper( newCandidata() );
        tmp = tmp->next;
    }while(1);

    for(tmp = c; tmp->next != NULL; tmp = tmp->next)
        if(tmp->this->altura >= 1.70)
            printf("%s - %.3f\n", tmp->this->nome, tmp->this->altura);

    return 0;
}
