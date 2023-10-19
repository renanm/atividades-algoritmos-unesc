#include<stdio.h>
#include<math.h>

main() {
	float numero;
	
	for (int i = 0; i < 4; i++) {
		printf("Informe o valor do numero: ");
		scanf("%f", &numero);
		printf("Raiz quadrada: %f\n\n", sqrt(numero));
	}
}
