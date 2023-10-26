#include<stdio.h>

main() {
	int numero, maior = 0, menor = 0, total = 0;
	float media;
	bool primeiro = true;

	for (int i = 0; i < 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numero);
		
		if (primeiro || numero < menor) {
			menor = numero;
			primeiro = false;
		}
		
		if (numero > maior) {
			maior = numero;
		}
		
		total += numero;
	}
	
	media = total / 5.0;
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media: %.2f\n", media);
	
}
