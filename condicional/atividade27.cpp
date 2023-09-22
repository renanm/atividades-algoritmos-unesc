#include<stdio.h>

main() {
	char sexo;
	float altura, pesoIdeal;
	printf("Informe o sexo (M para masculino e F para feminino): ");
	scanf("%c", &sexo);
	printf("Informe a altura, em metros: ");
	scanf("%f", &altura);
	
	if (sexo == 'm' or sexo == 'M') {
		pesoIdeal = (72.7 * altura) - 58;
	} else {
		pesoIdeal = (62.1 * altura) - 44.7;		
	}
	
	printf("Peso ideal: %.2f", pesoIdeal);
}
