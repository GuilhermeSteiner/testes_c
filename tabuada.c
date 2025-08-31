#include <stdio.h>

int main () {

	int numero;
	printf("Digite um numero para saber sua tabuada do 10: ");
	scanf("%d", &numero);
	
	for(int i = 1; i <= 10; i++) {
	
	int var = numero * i;
	printf("%d x %d = %d\n", numero, i, var);
}

}