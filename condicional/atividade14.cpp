#include <stdio.h>

main() {
	float salario;
	printf("Informe o salario: ");
	scanf("%f", &salario);
	if (salario < 3000) {
		printf("Salario reajustado: R$ %.2f", salario * 1.15);
	} else if (salario < 6000){
		printf("Salario reajustado: R$ %.2f", salario * 1.1);
	} else if (salario <= 9000){
		printf("Salario reajustado: R$ %.2f", salario * 1.05);
	} else {
		printf("Este salario permanece igual: R$ %.2f", salario);
	}
}
