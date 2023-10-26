#include<stdio.h>

main() {
	int numero, numeroLeituras, soma = 0, maior = 0, menor = 0, quantidadeImpares = 0;
	float percentualImpares, media, quantidade = 0;
	bool primeiro = true;
	printf("Informe o numero de leituras: ");
	scanf("%d", &numeroLeituras);
	
	for (int i = 0; i < numeroLeituras; i++) {
		printf("Escolha um numero: ");
		scanf("%d", &numero);
		soma += numero;
		quantidade++;
				
		if (primeiro || numero < menor) {
			menor = numero;
			primeiro = false;			
		}
		
		if (numero > maior) {
			maior = numero;
		}	
		
		if (numero % 2 == 1) {
			quantidadeImpares++;
		}	
	}
	
	media = soma / quantidade;
	percentualImpares = 100*quantidadeImpares / quantidade;
	printf("Soma: %d\n", soma);
	printf("Quantidade: %.0\n", quantidade);
	printf("Media: %.2f\n", media);
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Percentual de impares: %.2f%%\n", percentualImpares);
}
