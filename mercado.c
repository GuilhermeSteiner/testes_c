#include <stdio.h>
#include <string.h>

int main () {

	int visitas;
	scanf("%d", &visitas);

	for (int i = 0; i < visitas; i++) {

		double total = 0.0;
		int opcoes;
		scanf("%d", &opcoes);
		double precos[50];		
		char produtos[50][50];

		for (int j = 0; j < opcoes; j++) {			
			
			char fruta[50];
			double preco;
			scanf("%s %lf", fruta, &preco);
			precos[j] = preco;
			strcpy(produtos[j], fruta);

		}
		
		int diferentes;
		scanf("%d", &diferentes);
		char frutasnecessarias[50][50];
		int quantosprecisa[50];
		
		for (int x = 0; x < diferentes; x++) {

			char frutinha[50];
			int quantos;
			scanf("%s %d", frutinha, &quantos);
			strcpy(frutasnecessarias[x], frutinha);
			quantosprecisa[x] = quantos;

		}
		
		for (int y = 0; y < diferentes; y++) {
		
			for (int z = 0; z < opcoes; z++) {

				if (strcmp(frutasnecessarias[y], produtos[z]) == 0) {
					
					total += (quantosprecisa[y] * precos[z]);
					break;
				} 			

			}

		}
		
		printf("R$%.2lf\n", total);

	}

}