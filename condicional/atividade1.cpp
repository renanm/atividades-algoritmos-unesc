#include<stdio.h>

main() {
	float numero;
	printf("Informe um numero: ");
	scanf("%f", &numero);
	if (numero > 20) {
		printf("A metade e: %f", numero / 2);
	}
}
