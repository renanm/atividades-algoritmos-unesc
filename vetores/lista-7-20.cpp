#include<stdio.h>

/* 20) Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de 
números negativos e a soma dos números positivos desse vetor. */

main() {
	float vetor[10], somaPositivos = 0;
	int quantidadeNegativos = 0;
	
	// preenche todos os vetores
	for (int i = 0; i < 10; i++) {
		printf("Informe um numero real: ");
		scanf("%f", &vetor[i]);
		
		// aproveitando o loop pra ver os positivos e negativos
		if (vetor[i] < 0) {
			quantidadeNegativos++;
		} else {
			somaPositivos += vetor[i];
		}
	}
	
	// eis aqui as respostas solicitadas
	printf("\n- quantidade de numeros negativos: %d", quantidadeNegativos);
	printf("\n- soma dos positivos: %f", somaPositivos);
}
