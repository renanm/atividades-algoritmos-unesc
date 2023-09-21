#include <stdio.h>

main() {
	float preco;
	printf("Informe o preco: ");
	scanf("%f", &preco);
	
	if (preco <= 50) {
		printf("Novo preco: R$ %.2f\n", preco * 1.05);
	} else if (preco <= 100){
		printf("Novo preco: R$ %.2f\n", preco * 1.1);
	} else {
		printf("Novo preco: R$ %.2f\n", preco * 1.15);
	}
	
	if (preco <= 80) {
		printf("Classificacao: barato");
	} else if (preco <= 120){
		printf("Classificacao: normal");
	} else if (preco <= 200){
		printf("Classificacao: caro");
	} else {
		printf("Classificacao: muito caro");
	}
}
