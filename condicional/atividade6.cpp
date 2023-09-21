#include <stdio.h>

main() {
	int num1, num2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	if (num1 > num2) {
		printf("O maior numero e: %d.\nO menor numero e: %d.", num1, num2);
	} else {
		printf("O maior numero e: %d.\nO menor numero e: %d.", num2, num1);
	}
}
