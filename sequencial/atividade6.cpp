#include<stdio.h>

main() {
	float salarioBase, vendas, salarioFinal;
	printf("Informe o salario: ");
	scanf("%f", &salarioBase);
	printf("Informe o total das vendas: ");
	scanf("%f", &vendas);
	salarioFinal = salarioBase + vendas * 0.04;
	printf("Salario final: R$ %.2f", salarioFinal);
}
