#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "forca.h"

char palavrasecreta[TAMANHO_PALAVRA];
char todososchutes[26];
int chutesdados = 0;

void abertura () {
	printf("*************\n");
	printf("Jogo da forca\n");
	printf("*************\n");
}


void escolhepalavra() {

	FILE* f;

	f = fopen("palavras.txt","r");

	if (f == 0) {
		printf("Erro na leitura dos arquivos!");
		exit(1);
	}

	srand(time(0));

	int quantidadedepalavras;

	fscanf(f,"%d",&quantidadedepalavras);

	int randomico = rand() % quantidadedepalavras;

	for (int i = 0; i <= randomico; i++) {fscanf(f, "%s", palavrasecreta);}

	fclose(f);

}


int enforcou () {
	int erros = 0;
	for(int i = 0; i < chutesdados; i++) {
		int existe = 0;
		for(int j = 0; j < strlen(palavrasecreta); j++) {
			if (todososchutes[i] == palavrasecreta[j]) {
				existe = 1;
				break;
			}

		}

		if (!existe) {erros++;}

	}

	return erros >= 5;
}

int ganhou () {

	for (int i = 0; i < strlen(palavrasecreta); i++) {if (!jachutou(palavrasecreta[i])) {return 0;}}

	return 1;

}



int jachutou(char letra) {

	for (int j = 0; j < chutesdados; j++)  {
				
		if (todososchutes[j] == letra) {
			return 1;
		}
	}
	return 0;

}


void imprimirpalavrasecreta () {

	for(int i = 0; i < strlen(palavrasecreta); i++) {

			if (jachutou(palavrasecreta[i])) {printf(" %c", palavrasecreta[i]);}
			else {printf(" _");}
	}
	printf("\n");

}


void chutar () {

	printf("Chute uma letra: ");
	char chute;
	scanf(" %c", &chute);
	chute = toupper(chute);
	todososchutes[chutesdados] = chute;
	chutesdados++;
}


int main () {
	
	escolhepalavra();

	abertura();

	do {
	imprimirpalavrasecreta();
	chutar();
	}
	
	while(!(ganhou()) && !(enforcou()));

	if (ganhou()) {}
	else {enforcou();}

}
