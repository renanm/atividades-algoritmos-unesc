#include<stdio.h>

main() {
	int numero;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	while (numero != -999) {
		printf("%d", numero);
		printf("\nInforme um numero: ");
		scanf("%d", &numero);		
	}
}
