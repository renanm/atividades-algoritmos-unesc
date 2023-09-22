#include<stdio.h>

main() {
	int numero;
	
	printf("Escolha um numero: ");
	scanf("%d", &numero);
	
	if (numero % 10 == 0) {
		printf("Divisivel por 10, 5 e 2.");
	} else {
		printf("Nao e divisivel por 10, 5 e 2 ao mesmo tempo.");
	}
}
