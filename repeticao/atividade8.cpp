#include<stdio.h>

/*Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se a 
pessoa for do sexo masculino, e tiver mais de 21 anos*/

main() {
	char nome[50];
	int idade;
	char sexo;
	
	for (int i = 0; i < 20; i++) {
		printf("Informe o nome: ");
		scanf("%s", nome);
		fflush(stdin);
		printf("Informe o sexo (m = masculino, f = feminino): ");
		scanf("%c", &sexo);
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		if ((sexo == 'm' || sexo == 'M') && idade > 21) {
			printf("Nome: %s\n\n", nome);
		} else {
			printf("\n\n");
		}
	}
}
