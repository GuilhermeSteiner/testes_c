#include <stdio.h>

int fib(int i) {

    if (i == 0 || i == 1) {return 1;}
    else {return (fib((i-1)) + fib((i-2)));}

}

int main () {

    int numero;
    printf("Escolha um termo da sequencia de fibonacci: ");
    scanf("%d", &numero);
    printf("O termo de numero %d da sequencia de fibonacci corresponde a %d", numero, fib(numero));
}