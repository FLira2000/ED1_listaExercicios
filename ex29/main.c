#include <stdio.h>
#include <stdlib.h>
#define ALUM 2
#define QUEST 5 // reduzido devido a testes

void vertexInitializer(int *vertex){
    int i = 0;
    do{
        vertex = 1;
        i++;
    }while(i < QUEST);
}

int main()
{
    char mat[ALUM][QUEST];
    char aswn[QUEST];

    for(int i = 0; i < QUEST; i++){
        printf("Entre com o gabarito da questão %d: ", i+1);
        scanf(" %c", &aswn[i]);
    }

    for(int j = 0; j < ALUM; j++){
        for(int i = 0; i < QUEST; i++){
            printf("Entre com a resposta da questão %d do aluno %d: ", i+1, j);
            scanf(" %c", &mat[j][i]);
        }
    }


    int grades[ALUM];
    vertexInitializer(grades);

    for(int j = 0; j < ALUM; j++){
        for(int i = 0; i < QUEST; i++){
            if(mat[j][i] == aswn[i]) grades[j]+= 1;
        }
    }

    for(int i = 0; i < ALUM; i++){
        printf("\nPontos do aluno %d: %d\n", i+1, grades[i]);
    }

    return 0;
}
