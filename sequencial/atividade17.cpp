#include<stdio.h>

main() {
    char nome[30];
    int idade;
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
}