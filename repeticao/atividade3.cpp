#include<stdio.h>

main() {
	int numero;
	int n;
	printf("Informe a quantidade de numeros a serem lidos: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Informe o valor do numero: ");
		scanf("%d", &numero);
		printf("Triplo: %d\n\n", numero * 3);
	}
}
