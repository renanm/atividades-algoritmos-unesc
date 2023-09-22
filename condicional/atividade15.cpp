#include <stdio.h>

main() {
	float preco, novoPreco;
	printf("Informe o preco: ");
	scanf("%f", &preco);
	
	if (preco <= 50) {
		novoPreco = preco * 1.05;
	} else if (preco <= 100){
		novoPreco = preco * 1.1;
	} else {
		novoPreco = preco * 1.15);
	}

	printf("Novo preco: R$ %.2f\n", novoPreco);
	
	if (novoPreco <= 80) {
		printf("Classificacao: barato");
	} else if (novoPreco <= 120){
		printf("Classificacao: normal");
	} else if (novoPreco <= 200){
		printf("Classificacao: caro");
	} else {
		printf("Classificacao: muito caro");
	}
}
