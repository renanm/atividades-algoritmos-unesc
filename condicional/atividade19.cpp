#include<stdio.h>


main() {
	float preco, aumento, imposto, precoComAumento, precoFinal;
	int categoria;
	char situacao;
	
	printf("Informe o preco: ");
	scanf("%f", &preco);
	printf("Informe a categoria: ");
	scanf("%d", &categoria);
	printf("Informe a situacao: ");
	fflush(stdin);
	scanf("%c", &situacao);
	
	if (preco<=25) {
		if (categoria == 1) {
			aumento = 0.05;
		} else if (categoria == 2) {
			aumento = 0.08;
		} else {
			aumento = 0.1;
		}
	} else {
		if (categoria == 1) {
			aumento = 0.12;
		} else if (categoria == 2) {
			aumento = 0.15;
		} else {
			aumento = 0.18;
		}		
	}
	
	precoComAumento = preco * (1 + aumento);
	
	if (categoria == 2 || situacao == 'R' || situacao == 'r') {
		imposto = 0.05;
	} else {
		imposto = 0.08;
	}
	
	precoFinal = precoComAumento * (1 - imposto);
	
	printf("Valor do aumento: R$ %.2f (%.0f%%)\n", preco * aumento, aumento * 100);
	printf("Valor do imposto: R$ %.2f (%.0f%%)\n", precoComAumento * imposto, imposto * 100);
	printf("Preco final: R$ %.2f\n", precoFinal);
	
	if (precoFinal <= 50) {
		printf("Classificacao: Barato\n");
	} else if (precoFinal < 120) {
		printf("Classificacao: Normal\n");
	} else {
		printf("Classificacao: Caro\n");
	}
}
