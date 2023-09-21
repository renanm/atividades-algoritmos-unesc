#include<stdio.h>

main() {
    char nome[50], descricao[200];
	float frequencia, mediaMinima;
    printf("Informe o nome da disciplina: ");
    gets(nome);
    printf("Informe a descricao: ");
    gets(descricao);
    printf("Informe a frequencia minima para aprovacao: ");
    scanf("%f", &frequencia);
    printf("Informe a media minima para aprovacao: ");
    scanf("%f", &mediaMinima);

    printf("Nome: %s\n", nome);
    printf("Descricao: %s\n", descricao);
    printf("Frequencia minima para aprovacao: %.1f\n", frequencia);
    printf("Media minima para aprovacao: %.1f\n", mediaMinima);
}
