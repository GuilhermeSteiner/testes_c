#include <stdio.h>

int main () {
	
	double valoratual;
	int escolha;
	double divida;
	int encerrarcontas = 0;

	while(1) {

		printf("Digite o valor para ser descontadas as dividas: \n");
		if (scanf("%lf", &valoratual) != 1)
		{
			printf("Atenção! Digite um valor válido!\n");
			int c;
			while((c = getchar()) != '\n'  && c != EOF);
			continue;
		}

		break;
	}

	while (!encerrarcontas) {

		printf("DIVIDA ATUAL: %.2lf\n", valoratual);
		printf("Digite a dívida (ou digite 0 para sair): ");

		if (scanf("%lf", &divida) != 1 && divida != 0)
		{
			printf("Atenção! Digite um valor válido!\n");
			int c;
			while((c = getchar()) != '\n'  && c != EOF);
			continue;
		}

		if (divida == 0) {

			while(1) {
				printf("Voce tem certeza? 1 -> Sim / 0 -> Não(Voltar): \n");
				if (scanf("%d", &escolha) != 1 && escolha != 0 && escolha != 1)
				{
					printf("Atenção! Digite um valor válido!\n");
					int c;
					while((c = getchar()) != '\n'  && c != EOF);
				}

				if (escolha == 1) {
					encerrarcontas = 1;
					break;
				}

				if (escolha == 0) {break;}
				
				break;
			
			}
		
		}
		
		valoratual -= divida;

	}

	printf("Fim de execução de código!\n");
	printf("Voce deve R$%.2lf reais");

	return 0;
}