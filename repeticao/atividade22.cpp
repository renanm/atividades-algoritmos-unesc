#include<stdio.h>

main() {
	int quantidadeDois = 0, quantidadeUm = 0, numeroFilhos;
	float totalSalarioDois = 0, totalSalarioUm = 0, mediaSalarioDois, mediaSalarioUm, salario;
	char nome[30];
	
	for (int i = 0; i < 100; i++) {
		printf("Nome: ");
		scanf("%s", nome);
		printf("Numero de filhos: ");
		scanf("%d", &numeroFilhos);
		printf("Salario: ");
		scanf("%f", &salario);		
		if (numeroFilhos == 2) {
			quantidadeDois++;
			totalSalarioDois += salario;
		} else if (numeroFilhos == 1) {
			quantidadeUm++;
			totalSalarioUm += salario;
		}		
	}
	
	mediaSalarioDois = totalSalarioDois / quantidadeDois;
	mediaSalarioUm = totalSalarioUm / quantidadeUm;
	printf("Salario medio das pessoas com dois filhos: R$ %f\n", mediaSalarioDois);
	printf("Salario medio das pessoas com um filho: R$ %f\n", mediaSalarioUm);
	
	if (mediaSalarioDois > mediaSalarioUm) {
		printf("A media salarial maior e das pessoas com dois filhos.\n");
	} else if (mediaSalarioDois < mediaSalarioUm) {
		printf("A media salarial maior e das pessoas com um filho.\n");
	} else {
		printf("As medias sao iguais");
	}
	
}
