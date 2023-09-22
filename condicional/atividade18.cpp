#include<stdio.h>

main() {
	int codigo;
	float quantidade, precoUnitario, precoTotal, desconto, precoFinal;
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);
	
	if (codigo >= 1 && codigo <= 10) {
		precoUnitario = 10;
	} else if (codigo >= 11 && codigo <= 20) {
		precoUnitario = 15;
	} else if (codigo >= 21 && codigo <= 30) {
		precoUnitario = 20;
	} else if (codigo >= 31 && codigo <= 40) {
		precoUnitario = 30;
	} else {
		printf("Codigo invalido.\n");
	}
	
	
	printf("Preco unitario do produto: R$ %.2f\nInforme a quantidade: ", precoUnitario);
	scanf("%f", &quantidade);
	
	precoTotal = precoUnitario * quantidade;
	printf("Preco total da nota: R$ %.2f\n", precoTotal);
	
	if (precoTotal < 250) {
		desconto = 0.05;		
	} else if (precoTotal <= 500) {
		desconto = 0.1;
	} else {
		desconto = 0.15;
	}
	
	precoFinal = precoTotal * (1 - desconto);
	printf("Desconto de R$ %.2f (%.0f%%)\nPreco final: R$ %.2f", precoTotal * desconto, desconto * 100, precoFinal);
	
	
	
}
