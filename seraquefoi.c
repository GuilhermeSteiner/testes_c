#include <stdio.h>

int main () {

    char nome[100];
    int idade;

    printf("Qual é o seu nome? :");
    fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = '\0';
    printf("Qual é a sua idade? :");
    scanf("%d", &idade);
    printf("\nSaudações %s de %d anos!", nome, idade);
}