#include<stdio.h>

/*
11)Elabore um algoritmo que receba os dados de v�rios funcion�rios. Os dados a serem informados 
s�o: 
? O valor do sal�rio m�nimo; 
? O n�mero de horas trabalhadas; 
? O n�mero de dependentes de cada funcion�rio; 
? Quantidade de horas extras trabalhadas. 
Obs: Quando �1 for digitado para horas trabalhadas, a entrada de dados � finalizada. 
Ao final de cada leitura, calcule e imprima o sal�rio a receber de cada funcion�rio, tendo em vista 
as regras a seguir: 
a. O valor da hora trabalhada � igual a 1/10 do sal�rio m�nimo; 
b. O sal�rio do m�s � igual ao n�mero de horas trabalhadas, multiplicado pelo valor da hora 
trabalhada; 
c. Para cada dependente, � feito um acr�scimo de R$ 32 reais; 
d. Para cada hora extra trabalhada, � feito um acr�scimo de 50% ao valor da hora trabalhada; 
e. O sal�rio bruto � igual ao sal�rio do m�s, mais os valores dos dependentes, e mais valores 
das horas extras; 
f. O desconto do Imposto de Renda retido na fonte segue a tabela a seguir: 
IRRF Sal�rio Bruto 
Isento At� 900,00 
10% Acima de 900,00 at� 1500,00 
20% Superior a 1500,00 
g. O sal�rio l�quido � igual ao sal�rio bruto menos o IRRF; 
h. A gratifica��o segue a tabela a seguir: 
Sal�rio L�quido Bonifica��o 
At� 900,00 R$ 100,00 
Superior a 900,00 R$ 50,00 
i. O sal�rio a receber do funcion�rio � igual ao sal�rio l�quido mais a gratifica��o.
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
			desconto += (salarioMes - 1500) * 0.1; // desconta mais 10% referente ao que estiver acima R$ 1500, lembrando que a linha anterior j� tirou 10% dessa faixa tamb�m
		} else if (salarioMes > 900) {
			desconto += (salarioMes - 900) * 0.1;
		}
		
		salarioLiquido = salarioMes - desconto + 50; // gratifica��o de 50 pilas j� inclu�da aqui
		if (salarioLiquido <= 900) {
			salarioLiquido += 50; // mais 50 para a turma do sub-900, totalizando 100
		}
		
		printf("Salario a receber: R$ %.2f\n\n", salarioLiquido);
		
		// Aqui come�a outra leitura
		printf("Salario minimo: ");
		scanf("%f", &salarioMinimo);
		printf("Horas trabalhadas: ");
		scanf("%f", &horasTrabalhadas);		
					
	} 
	
}
