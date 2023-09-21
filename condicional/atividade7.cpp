#include <stdio.h>

main() {
	int num1, num2, num3;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	if (num1 < num2 && num1 < num3) {
		printf("O menor e: %d", num1);
	} else if (num2 < num3) {
		printf("O menor e: %d", num2);
	} else {
		printf("O menor e: %d", num3);
	}
}
