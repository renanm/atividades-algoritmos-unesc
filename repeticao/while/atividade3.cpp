#include<stdio.h>

main() {
	int numero, total = 1;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	while (numero > 0) {
		printf("%d", numero);
		printf("\nInforme um numero: ");
		scanf("%d", &numero);
		total += 1;		
	}
	printf("\nForam digitado(s) %d numero(s)", total);
}
