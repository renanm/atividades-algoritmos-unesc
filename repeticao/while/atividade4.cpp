#include<stdio.h>

main() {
	int numero, total = 1;
	float media, soma = 0;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	soma += numero;
	while (numero > 0) {
		printf("%d", numero);
		printf("\nInforme um numero: ");
		scanf("%d", &numero);
		total += 1;	
		soma += numero;	
	}
	media = soma / total;
	printf("\nMedia do(s) numero(s) digitado(s): %f", media);
}
