#include<stdio.h>

main() {
	char nome[20];
	float salario, desconto, gratificacao;
	int tempoTrabalho;
	printf("Informe o nome: ");
	scanf("%s", nome);
	printf("Informe o salario: ");
	scanf("%f", &salario);
	printf("Informe tempo de trabalho, em anos completados: ");
	scanf("%d", &tempoTrabalho);
	
	printf("Nome do funcionario: %s\n", nome);
	if (salario < 200) {
		desconto = 0;
	} else if (salario <= 450) {
		desconto = 0.03;
	} else if (salario < 700) {
		desconto = 0.08;
	} else {
		desconto = 0.12;
	}
	
	printf("Desconto de %.0f%% (R$ %.2f)\n", desconto * 100, salario * desconto);
	
	
	if (salario < 500) {
		if (tempoTrabalho <= 3) {
			gratificacao = 0.2;
		} else {
			gratificacao = 0.3;
		}
	} else {
		if (tempoTrabalho <= 3) {
			gratificacao = 0.23;
		} else if (tempoTrabalho < 6){
			gratificacao = 0.35;
		} else {
			gratificacao = 0.33;
		}
	}
	printf("Gratificacao de %.0f%% (R$ %.2f)\n", gratificacao * 100, salario * gratificacao);
	
	printf("Salario liquido: R$ %.2f", salario - salario * desconto + salario * gratificacao);
	
	
}
