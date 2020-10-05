#include <stdio.h>
#include <stdlib.h>

/*Declarar um registro que armazene os dados de um funcionário da forma
abaixo. Criar dois exemplos de tal registro e apresentar na tela.*/

typedef struct Funcionario
{
    char* nome;
    struct end
    {
        char* rua;
        int num;
        char* comp;
        char* bairro;
        char* cidade;
    }end;
    char* cpf;
    char* dtNasc;
    int temDepend;//1 ou 0 para sim ou não
    char* sexo;
    struct horasTrab
    {
        int semana1;
        int semana2;
        int semana3;
    }horasTrab;
}funcionario;

void mostraFunc(funcionario func){
    printf("Nome: %s\n", func.nome);
    printf("CPF: %s\n", func.cpf);
    printf("Data de Nascimento: %s\n", func.dtNasc);
    func.temDepend ? printf("Dependentes: Sim\n") : printf("Dependentes: Nao\n");
    printf("Sexo: %s\n", func.sexo);
    printf("Endereco: %s %d, %s - %s \n", func.end.rua, func.end.num, func.end.bairro, func.end.cidade);
    printf("Complemento: %s\n", func.end.comp);
    printf("Horas trabalhadas: \n");
    printf("Semana 1: %d\n", func.horasTrab.semana1);
    printf("Semana 2: %d\n", func.horasTrab.semana2);
    printf("Semana 3: %d\n", func.horasTrab.semana3);
}

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
    funcionario f1, f2;
    f1.nome = setString("Fábio Lira", 128);
    f1.end.rua = setString("Rua Rosarinho", 128);
    f1.end.num = 20;
    f1.end.comp = setString("Rua Dois, quarta rua a esquerda na rua Rosarinho, casa 2", 256);
    f1.end.bairro = setString("Guaratiba", 32);
    f1.end.cidade = setString("Rio de Janeiro", 32);
    f1.cpf = setString("169.168.657-33", 16);
    f1.dtNasc = setString("08/12/2000", 16);
    f1.temDepend = 0;
    f1.sexo = "M";
    f1.horasTrab.semana1 = 44;
    f1.horasTrab.semana2 = 30;
    f1.horasTrab.semana3 = 25;

    f2.nome = setString("Gabriel Silvino", 64);
    f2.end.rua = setString("Rua Parazinho", 128);
    f2.end.num = 100;
    f2.end.comp = setString("em frente a pizzaria", 128);
    f2.end.bairro = setString("Campo Grande", 32);
    f2.end.cidade = setString("Rio de Janeiro", 32);
    f2.cpf = setString("-----------", 16);
    f2.dtNasc = setString("22/04/1997", 16);
    f2.temDepend = 0;
    f2.sexo = "M";
    f2.horasTrab.semana1 = 44;
    f2.horasTrab.semana2 = 30;
    f2.horasTrab.semana3 = 25;

    mostraFunc(f1);
    mostraFunc(f2);
    return 0;
}
