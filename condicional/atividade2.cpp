#include <stdio.h>

main() {
	int numero1, numero2, soma;
	printf("Informe um numero: ");
	scanf("%d", &numero1);
	printf("Informe outro numero: ");
	scanf("%d", &numero2);
	soma = numero1 + numero2;
	if (soma > 10) {
		printf("A soma e: %d", soma);
	}
}
