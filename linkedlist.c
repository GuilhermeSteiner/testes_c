#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pessoa {char nome[100]; int idade;} pessoa;

pessoa criarpessoa(char nome[100], int idade) {

    pessoa person;
    strcpy(person.nome, nome);
    person.idade = idade;
    return person;

}


int main () {

    int idade;
    char nome[100];
    printf("Qual e o seu nome?: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Qual a sua idade?: ");
    scanf("%d", &idade);
    pessoa pes = criarpessoa(nome, idade);
    printf("Saudacoes %s , que possui %d anos! VTNC!!! KKKK", pes.nome, pes.idade );
    return 0;

}