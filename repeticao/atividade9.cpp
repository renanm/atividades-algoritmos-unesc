#include<stdio.h>

main() {
	
	char nome[50];
	float n1, n2, media;
	
	for (int i = 0; i < 15; i++) {
		printf("Nome do aluno: ");
		fflush(stdin);
		gets(nome);
		printf("Primeira nota: ");
		scanf("%f", &n1);
		printf("Segunda nota: ");
		scanf("%f", &n2);
		media = (n1+n2)/2;
		printf("Nome: %s\n", nome);
		printf("Nota 1: %.2f\n", n1);
		printf("Nota 2: %.2f\n", n2);
		printf("Media: %.2f\n\n\n", media);
	}
	
}
