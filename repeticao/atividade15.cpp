#include<stdio.h>

main() {
	int numero, fatorial = 1;
	printf("Escolha um numero: ");
	scanf("%d", &numero);
	for (int i = numero; i > 1; i--) {
		fatorial *= i;
	}
	printf("\n%d! = %d", numero, fatorial);
}
