#include<stdio.h>

main () {
	float peso;
	int idade, grupo;
	printf("Informe o peso: ");
	scanf("%f", &peso);
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if (idade < 20) {
		grupo = 9;
	} else if (idade <= 50) {
		grupo = 6;
	} else {
		grupo = 3;
	}
	
	if (peso > 90) {
		grupo = grupo - 2;
	} else if (peso > 60) {
		grupo = grupo - 1;
	}
	printf("Grupo de risco: %d", grupo);
}
