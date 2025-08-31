#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abertura () {

    printf("***************************\n");
    printf("Bem vindo ao jogo da forca!\n");
    printf("***************************\n");
}

void imprimirpalavra (char secretword[100], char allguesses[26]) {

    for (int i = 0; i < strlen(secretword); i++) {

        int achou = 0;

        for (int j = 0; j < strlen(allguesses); j++) {

            if (secretword[i] == allguesses[j]) {
                achou = 1;
                break;
                }

        }
    
    if (achou) {printf(" %c", secretword[i]);}
    else {printf(" _");}

    }
}

void chutar (char allguesses[26], int tries) {

    char chute;
    printf("Chute uma letra: ");
    scanf(" %c", &chute);
    chute = toupper(chute);
    allguesses[tries] = chute;

}

int main () {

    char palavrasecreta[100] = "MELANCIA";
    char todoschutes[26];
    int tentativas = 0;
    int enforcou = 0;
    int acertou = 0;

    abertura();

    do {

        imprimirpalavra(palavrasecreta, todoschutes);
        printf("\n");
        chutar(todoschutes, tentativas);
        tentativas++;
        
    } while (!acertou && !enforcou);
 
}