#include <stdio.h>

int main () {

	int linhas;
	int valores;
	printf("Digite quantas linhas e quantos valores terão em cada linha: \n");
	scanf("%d %d", &linhas, &valores);

	for (int i = 0; i < linhas; i++) {

		int soma = 0;
		
		for (int j = 0; j < valores; j++) {
			int x;
			scanf("%d",&x);
			soma+=x;

		}
		
		printf("%d\n", soma);
	}

}