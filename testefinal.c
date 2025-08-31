#include <stdio.h>
#include <string.h>
typedef struct {char nome[100]; int idade; char cidade[100];} pessoa;

pessoa criarpessoa(char name[100], int age, char city[100]) {

    pessoa person;
    name[strcspn(name, "\n")] = '\0';
    city[strcspn(city, "\n")] = '\0';
    strcpy(person.nome, name);
    person.idade = age;
    strcpy(person.cidade, city);
    return person;

}

int main () {

    int age;
    char name[100];
    char city[100];
    printf("Qual é o seu nome? :");
    fgets(name, sizeof(name), stdin);
    printf("Qual é a sua idade? :");
    scanf("%d", &age);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Qual cidade você mora? :");
    fgets(city, sizeof(city), stdin);
    pessoa x = criarpessoa(name, age, city);
    printf("Olá, %s, morador de %s, com %d anos!", x.nome, x.cidade, x.idade);

    return 0;
}