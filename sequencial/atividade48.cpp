#include<stdio.h>

main() {
    int horasTrabalhadas;
	float salarioMinimo;
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Informe o salario minimo: ");
    scanf("%f", &salarioMinimo);
    
    float valorHoraTrabalhada = salarioMinimo / 8;
    float salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    float impostos = salarioBruto * 0.03;
    float salarioLiquido = salarioBruto - impostos;

    printf("Salario liquido a receber: R$ %.2f\n", salarioLiquido);
}
