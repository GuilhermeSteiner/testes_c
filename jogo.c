#include <stdio.h>


int main () {

	int numeroSecreto = 42;
	int chute;
	int acertou = (numeroSecreto == chute);
	printf("******************\n");
	printf("Bem vindo ao jogo!\n");
	printf("******************\n");
	printf("Tente advinhar um numero: ");
	scanf("%d", &chute);
	
	if (acertou) {printf("\nParabens! Voce acertou o numero!\n");}
	
	else {
	
		int menor = (chute > numeroSecreto);
	
		if (menor) {printf("\nVoce errou, o numero era menor!\n");}

		else{printf("\nVoce errou, o numero era maior!\n");}

	}

	printf("O numero correto e %d", numeroSecreto);
}