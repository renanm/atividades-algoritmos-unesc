#include <stdio.h>

main() {
	float num1, num2;
	int escolha;
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	printf("Informe o numero da operacao desejada: ");
	scanf("%d", &escolha);
	if (escolha == 1) {
		printf("Media entre os numeros digitados: %.2f", (num1 + num2) / 2);
	} else if (escolha == 2) {
		if (num1 > num2) {
			printf("Diferenca do maior pelo menor: %.2f", num1 - num2);
		}
		else {
			printf("Diferenca do maior pelo menor: %.2f", num2 - num1);
		}
	} else if (escolha == 3) {
		printf("Produto entre os numeros digitados: %.2f", num1 * num2);
	} else if (escolha == 4) {
		printf("Divisao do primeiro pelo segundo: %.2f", num1 / num2);
	} else {
		printf("A opcao digitada e invalida.");
	}
}
