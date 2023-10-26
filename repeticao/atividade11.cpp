#include<stdio.h>

main() {
	int numeroPares = 0, numeroImpares = 0;
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
		
	printf("Numeros pares: %d\n", numeroPares);
	printf("Numeros impares: %d\n", numeroImpares);
}
