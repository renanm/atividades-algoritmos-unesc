#include<stdio.h>

main() {
	int numero, produto = 1;
	printf("Escolha um numero: ");
	scanf("%d", &numero);
	for (int i = 1; i <= numero; i++) {
		printf("%d ", i);
		produto *= i;
	}
	printf("\nProduto: %d", produto);
}
