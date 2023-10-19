#include<stdio.h>

main() {
	float total = 0, numero;
	for (int i = 0; i < 4; i++) {
		printf("Informe o valor do numero: ");
		scanf("%f", &numero);
		total += numero;
	}
	
	printf("Media: %f\n\n", total/4);
	
}
