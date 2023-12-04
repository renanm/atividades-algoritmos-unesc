#include<stdio.h>

/* 17) Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de 
elementos iguais a 30, mostrando as posições em que apareceram. */

main() {
	int vetor[15], indices30[15], total30 = 0;
	
	// preenche todos os vetores
	for (int i = 0; i < 15; i++) {
		printf("Informe um numero inteiro: ");
		scanf("%d", &vetor[i]);
		
		// aproveitando o loop pra armazenar os índices e fazer a contagem
		if (vetor[i] == 30) {
			indices30[total30] = i;
			total30++;
		}
	}
	
	// eis aqui as respostas solicitadas
	printf("\n- quantidade de numeros 30: %d", total30);
	printf("\n- as posicoes em que eles aparecem: ");
	for (int i = 0; i < total30; i++) { // total30 usado como referencia
		printf("%d ", indices30[i]);	
	}
}
