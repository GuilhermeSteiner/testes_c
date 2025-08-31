#include <stdio.h>


int main () {

	char minhastring[100];
	int idade;
	printf("Digite o seu nome: ");
	fgets(minhastring, sizeof(minhastring), stdin);
	minhastring[strcspn(minhastring, "\n")] = '\0';
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Ola, %s, de %d anos!", minhastring, idade);
}