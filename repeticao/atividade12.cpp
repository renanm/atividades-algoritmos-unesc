#include<stdio.h>

main() {
	int numeroPares = 0, numeroImpares = 0, total;
	float percentualPares, percentualImpares;
	int numero;
	
	for (int i = 0; i < 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numero);
		if (numero % 2 == 0) {
			numeroPares++;
		} else {
			numeroImpares++;
		}				
	}
	
	total = numeroImpares + numeroPares;
	percentualPares = 100 * numeroPares / total;
	printf("Percentual de numeros pares: %.2f%%\n", percentualPares);
}
