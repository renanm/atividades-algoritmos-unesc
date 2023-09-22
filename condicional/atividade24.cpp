#include<stdio.h>

main() {
	int numero;
	
	printf("Escolha um numero: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0) {
		printf("Multiplo de 3.");
	} else {
		printf("Nao e multiplo de 3.");
	}
}

