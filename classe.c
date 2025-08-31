#include <stdio.h>
#include <string.h>
typedef struct {char nome[100]; int idade;} pessoa;

pessoa criarpessoa(char name[100], int age) {
	pessoa person;
	strcpy(person.nome, name);
	person.nome[strcspn(person.nome, "\n")] = '\0';
	person.idade = age;
	return person;

}

int main () {
	
	printf("Qual o seu nome?\n");
	char nome[100];
	fgets(nome, sizeof(nome), stdin);
	printf("Qual a sua idade?\n");
	int idade;
	scanf("%d", &idade);
	pessoa guy = criarpessoa(nome, idade);
	printf("Saudacoes %s, de %d anos!", guy.nome, guy.idade);
	return 0;

}