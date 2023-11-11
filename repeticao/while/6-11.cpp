#include<stdio.h>

/*
11)Elabore um algoritmo que receba os dados de vários funcionários. Os dados a serem informados 
são: 
? O valor do salário mínimo; 
? O número de horas trabalhadas; 
? O número de dependentes de cada funcionário; 
? Quantidade de horas extras trabalhadas. 
Obs: Quando –1 for digitado para horas trabalhadas, a entrada de dados é finalizada. 
Ao final de cada leitura, calcule e imprima o salário a receber de cada funcionário, tendo em vista 
as regras a seguir: 
a. O valor da hora trabalhada é igual a 1/10 do salário mínimo; 
b. O salário do mês é igual ao número de horas trabalhadas, multiplicado pelo valor da hora 
trabalhada; 
c. Para cada dependente, é feito um acréscimo de R$ 32 reais; 
d. Para cada hora extra trabalhada, é feito um acréscimo de 50% ao valor da hora trabalhada; 
e. O salário bruto é igual ao salário do mês, mais os valores dos dependentes, e mais valores 
das horas extras; 
f. O desconto do Imposto de Renda retido na fonte segue a tabela a seguir: 
IRRF Salário Bruto 
Isento Até 900,00 
10% Acima de 900,00 até 1500,00 
20% Superior a 1500,00 
g. O salário líquido é igual ao salário bruto menos o IRRF; 
h. A gratificação segue a tabela a seguir: 
Salário Líquido Bonificação 
Até 900,00 R$ 100,00 
Superior a 900,00 R$ 50,00 
i. O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

main() {
	float salarioMinimo, horasTrabalhadas, horasExtras, valorHora;
	float salarioMes, salarioLiquido, desconto;
	int dependentes;
	
	printf("Salario minimo: ");
	scanf("%f", &salarioMinimo);
	printf("Horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	while (horasTrabalhadas != -1) {
		printf("Numero de dependentes: ");
		scanf("%d", &dependentes);
		printf("Horas extras trabalhadas: ");
		scanf("%f", &horasExtras);
		
		valorHora = salarioMinimo / 10;
		salarioMes = valorHora * horasTrabalhadas;
		salarioMes += dependentes * 32;
		salarioMes += valorHora * 1.5 * horasExtras;
		
		desconto = 0.;
		
		if (salarioMes > 1500) {
			desconto += (salarioMes - 900) * 0.1; // desconta 10% referente a tudo o que estiver acima de R$ 900
			desconto += (salarioMes - 1500) * 0.1; // desconta mais 10% referente ao que estiver acima R$ 1500, lembrando que a linha anterior já tirou 10% dessa faixa também
		} else if (salarioMes > 900) {
			desconto += (salarioMes - 900) * 0.1;
		}
		
		salarioLiquido = salarioMes - desconto + 50; // gratificação de 50 pilas já incluída aqui
		if (salarioLiquido <= 900) {
			salarioLiquido += 50; // mais 50 para a turma do sub-900, totalizando 100
		}
		
		printf("Salario a receber: R$ %.2f\n\n", salarioLiquido);
		
		// Aqui começa outra leitura
		printf("Salario minimo: ");
		scanf("%f", &salarioMinimo);
		printf("Horas trabalhadas: ");
		scanf("%f", &horasTrabalhadas);		
					
	} 
	
}
