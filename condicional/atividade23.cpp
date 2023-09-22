#include<stdio.h>

main() {
	int numero;
	printf("Escolha um numero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf("Par!");
	} else {
		printf("Impar!");
	}
}
