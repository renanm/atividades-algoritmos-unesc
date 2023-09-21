#include<stdio.h>

main()
{
	float salarioMinimo, salarioFuncionario, numeroSalariosMinimos;
	printf("Informe o salario minimo:");
	scanf("%f", &salarioMinimo);
	printf("Informe o salario do funcionario:");
	scanf("%f", &salarioFuncionario);
	numeroSalariosMinimos = salarioFuncionario / salarioMinimo;
	printf("O funcionario recebe %.2f salario(s) minimo(s)", numeroSalariosMinimos);
}
