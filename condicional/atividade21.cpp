#include<stdio.h>

main() {
	int n1, n2, n3, n4;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero (maior que o primeiro): ");
	scanf("%d", &n2);
	printf("Informe o terceiro numero (maior que o segundo): ");
	scanf("%d", &n3);
	printf("Informe o quarto numero: ");
	scanf("%d", &n4);
	
	if (n4 > n3) {
		printf("%d\n", n4);
		printf("%d\n", n3);
		printf("%d\n", n2);
		printf("%d\n", n1);
	} else if (n4 > n2) {
		printf("%d\n", n3);
		printf("%d\n", n4);
		printf("%d\n", n2);
		printf("%d\n", n1);
	} else if (n4 > n1) {
		printf("%d\n", n3);
		printf("%d\n", n2);
		printf("%d\n", n4);
		printf("%d\n", n1);		
	} else {
		printf("%d\n", n3);
		printf("%d\n", n2);
		printf("%d\n", n1);
		printf("%d\n", n4);		
	}
	
}
