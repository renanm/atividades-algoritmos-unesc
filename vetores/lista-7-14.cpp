#include<stdio.h>

/* Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
a) todos os números pares;
b) a quantidade de números pares;
c) todos os números impares;
d) a quantidade de números ímpares */

main() {
	int vetor[6], totalPares = 0, totalImpares = 0;
	
	
	// preenche todos os vetores
	for (int i = 0; i < 6; i++) {
		printf("Informe um numero inteiro: ");
		scanf("%d", &vetor[i]);
		
		// aproveitando o loop pra já fazer a contagem
		if (vetor[i] % 2 == 0) {
			totalPares++;
		} else {
			totalImpares++;			
		}
	}
	
	
	// eis aqui as respostas solicitadas
	printf("\na) todos os numeros pares: ");
	for (int i = 0; i < 6; i++) {
		if (vetor[i] % 2 == 0) {
			printf("%d ", vetor[i]);
		}		
	}
	
	printf("\nb) a quantidade de numeros pares: %d", totalPares);
	
	printf("\nc) todos os numeros impares: ");
	for (int i = 0; i < 6; i++) {
		if (vetor[i] % 2 == 1) {
			printf("%d ", vetor[i]);
		}		
	}
	
	printf("\nd) a quantidade de numeros impares: %d", totalImpares);
	
}
