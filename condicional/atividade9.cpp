#include <stdio.h>
#include <math.h>

main() {
	float num1, num2;
	char escolha;
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	printf("Informe o numero da operacao desejada: ");
	fflush(stdin);
	scanf("%c", &escolha);
	
	if (escolha == 'a') {
		printf("Primeiro numero elevado ao segundo: %f: ", pow(num1, num2));
	} else if (escolha == 'b') {
		printf("Raiz quadrada dos numeros: %f e %f", sqrt(num1), sqrt(num2));
	} else if (escolha == 'c') {
		printf("Raiz cubica dos numeros: %f e %f", cbrt(num1), cbrt(num2));
	} else {
		printf("A opcao digitada e invalida.");
	}
}
