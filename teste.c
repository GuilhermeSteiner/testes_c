#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	printf("******************\n");
	printf("Bem vindo ao jogo!\n");
	printf("******************\n");

	srand(time(0));
	int numerocorreto = rand() % 100;
	double pontos = 1000;
	int chute;
	int numerodetentativas;
	int acertou = 0;
	int nivel;

	printf("Qual a dificuldade que voce quer jogar? (1) Facil - (2) Medio - (3) Dificil\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	switch(nivel) {
		case 1:
			numerodetentativas = 20;
		 	break;

		case 2:
			numerodetentativas = 15;
			break;

		default: numerodetentativas = 5;
	}

	for(int i = 1; i <= numerodetentativas; i++) {
	printf("Tentativa %d\n", i);
	printf("Advinhe um numero: ");	
	scanf("%d", &chute);

	if (chute < 0) {
		printf("Atencao! Nao pode numero negativo!\n");
		continue;
	}

	acertou = (chute == numerocorreto);

	if (acertou) {
		numerodetentativas = i;
		break;
	}

	else {
		pontos -= abs((double)(chute - numerocorreto) / (double)2);
		printf("Errou! ");
		int menor = (numerocorreto > chute);
		if (menor) {
			printf("Voce chutou um numero menor do que o correto!\n");
		}

		else {
			printf("Voce chutou um numero maior do que o correto!\n");
		}
	}

	printf("Seu chute foi: %d\n", chute);

}

if (acertou) {
	printf("Parabens! Voce acertou!!!\n");
	printf("Total de pontos: %.1f\n", pontos);	
}

else {
	printf("Infelizmente voce nao acertou o numero em nenhuma tentativa...\n");
}

	printf("Fim de jogo! O numero correto era %d e voce fez %d tentativas!\n", numerocorreto, numerodetentativas);
}