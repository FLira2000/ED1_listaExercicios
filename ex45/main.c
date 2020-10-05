#include <stdio.h>
#include <stdlib.h>

void printFulanoDeTal(char * nomeFulano){
    printf("============================================\n");
    printf("Uezo – Centro Universitário da Zona Oeste\n");
    printf("Curso: Ciência da Computação\n");
    printf("Disciplina: ED I\n");
    printf("Nome: %s\n", nomeFulano);
    printf("============================================\n");
}

int main()
{
    printFulanoDeTal("Alceu Valença");
    return 0;
}
