#include<stdio.h>

main() {
	int totalPositivos = 0, numeroNegativos = 0;
	int numero;
	
	for (int i = 0; i < 20; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numero);
		if (numero >= 0) {
			totalPositivos += numero;
		} else {
			numeroNegativos++;
		}
	}
		
	printf("Soma dos positivos: %d\n", totalPositivos);
	printf("Numero de negativos: %d\n", numeroNegativos);
}
