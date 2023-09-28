#include<stdio.h>

main() {
	int opcao;
	float n1, n2;
	printf("Menu de opcoes:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\nDigite a opcao desejada: ");
	scanf("%d", &opcao);
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	switch(opcao) {
		case 1:
			printf("%f", n1 + n2);
			break;
		case 2:
			printf("%f", n1 - n2);
			break;
		case 3:
			printf("%f", n1 * n2);
			break;
		case 4:
			if (n2 != 0) {
				printf("%f", n1 / n2);
			} else {
				printf("Indefinido - Divisao por zero");
			}
			break;
		default:
			printf("Opcao invalida");
	}
}
