#include<stdio.h>

/*
13) Faça um programa que receba vários números, calcule e mostre: 
? a soma dos números digitados; 
? a quantidade de números digitados; 
? a média dos números digitados; 
? o maior número digitado; 
? o menor número digitado; 
? a média dos números pares; 
? porcentagem dos números ímpares entre todos os números digitados. Finalize a entrada de 
dados com a digitação do número 30.000.
*/

main() {
	int numero = 0, quantidade = 0, quantidadePares = 0, quantidadeImpares = 0;
	float maior, menor, somaPares = 0., soma = 0.;	
	bool primeiro = true;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	while (numero != 30000) {
		quantidade++;
		soma += numero;
		if (primeiro) {
			maior = numero;
			menor = numero;
			primeiro = false;		
		} else if (numero > maior) {
			maior = numero;			
		} else if (numero < menor) {
			menor = numero;
		}
				
		if (numero % 2 == 0) {
			quantidadePares++;
			somaPares += numero;
		} else {
			quantidadeImpares++;
		}	
		printf("Informe um numero: ");
		scanf("%d", &numero);	
	}
		
	// condicoes para evitar divisao por zero
	if (quantidade > 0) {
		printf("\nSoma: %.0f\n", soma);
		printf("Numeros digitados: %d\n", quantidade);
		printf("Media: %.2f\n", soma / quantidade);
		printf("Maior: %.0f\n", maior);
		printf("Menor: %.0f\n", menor);
		if (quantidadePares > 0) {
			printf("Media dos numeros pares: %.2f\n", somaPares / quantidadePares);
		} else {
			printf("Nenhum numero par digitado");
		}
		printf("Porcentagem de numeros impares: %.2f%%\n", (100. * quantidadeImpares) / quantidade);
	} else {
		printf("\nNenhum numero digitado");
	}	
}
