#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	printf("************\n");
	printf("Testeeeee!!!\n");
	printf("************\n");
	printf("Dificuldade 1, 2 ou 3?");
	srand(time(0));
	int numerosecreto = rand() % 100;
	int chute;
	int numerodetentativas;
	double pontos = 1000;
	int acertou = 0;
	int nivel;
	scanf("%d",&nivel);

	switch(nivel) {

	case 1:
		numerodetentativas = 15;
		break;

	case 2:
		numerodetentativas = 10;
		break;

	default: numerodetentativas = 5;		

}

	for (int i = 1; i <= numerodetentativas; i++) {
	printf("Tentativa %d\n",i);
	printf("Digite um numero: ");
	scanf("%d",&chute);
	
	acertou = (numerosecreto == chute);

	if (acertou) {
	numerodetentativas = i;
	break;

	}
	
	else {
	
	printf("Errou!\n");

	int menor = (numerosecreto > chute);

	if (menor) {printf("O numero que voce digitou e menor do que o numero secreto!\n");}

	else {printf("O numero que voce digitou e maior do que o numero secreto!\n");}

	pontos -= abs((double)(numerosecreto - chute) / (double)2);

	}


}

	if (acertou) {
	printf("Voce acertou o numero, meus parabens!\n");
	printf("Voce fez %.1f pontos!\n", pontos);
	}

	else {printf("Fim do numero de tentativas!\n");}

	printf("Fim de jogo! O numero era %d e voce realizou %d tentativas!", numerosecreto, numerodetentativas);

}