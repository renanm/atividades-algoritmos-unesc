#include<stdio.h>

main() {
	int n1, n2;
	printf("Escolha o primeiro numero: ");
	scanf("%d", &n1);
	printf("Escolha o segundo numero: ");
	scanf("%d", &n2);
	
	if (n1 % n2 == 0) {
		printf("A divisao de %d por %d e exata!", n1, n2);
	}
}
