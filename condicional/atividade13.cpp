#include <stdio.h>

main() {
	float custoFabrica;
	printf("Informe o custo de fabrica do carro: ");
	scanf("%f", &custoFabrica);
	if (custoFabrica <= 15000) {
		printf("Preco final ao consumidor: R$ %.2f", custoFabrica * 1.05);
	} else if (custoFabrica <= 25000) {
		printf("Preco final ao consumidor: R$ %.2f", custoFabrica * 1.25);
	} else {
		printf("Preco final ao consumidor: R$ %.2f", custoFabrica * 1.35);
	}
}
