#include<stdio.h>

/* 20) Fa�a um programa que preencha um vetor com dez n�meros reais, calcule e mostre a quantidade de 
n�meros negativos e a soma dos n�meros positivos desse vetor. */

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
