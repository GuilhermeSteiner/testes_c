#include <stdio.h>
#include <math.h>

double potencia (int x, int y) {return pow(x,y);}

int main () {
	int base;
	int expoente;
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	printf("%d elevado a %d e igual a %.0f", base, expoente, pow(base,expoente));
}