#include<stdio.h>

main() {
	float salario;
	printf("Informe o salario: ");
	scanf("%f", &salario);
	
	if (salario <= 600) {
		printf("Isento");
	} else if (salario <= 1200) {
		printf("Desconto de 20%% (R$ %.2f)", salario * 0.2);
	} else if (salario <= 2000) {
		printf("Desconto de 25%% (R$ %.2f)", salario * 0.25);
	} else {
		printf("Desconto de 30%% (R$ %.2f)", salario * 0.3);
	}
}
