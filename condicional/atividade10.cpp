#include <stdio.h>

main() {
	float salario;
	printf("Informe o salario: ");
	scanf("%f", &salario);
	if (salario < 1500) {
		printf("O valor do salario reajustado e: R$ %.2f", salario * 1.3);
	} else {
		printf("O salario informado nao da direito ao aumento");
	}
}
