#include<stdio.h>

main() {
	float peso, pesoMais15PorCento, pesoMenos20PorCento;
	printf("Informe o peso: ");
	scanf("%f", &peso);
	pesoMais15PorCento = peso * 1.15;
	pesoMenos20PorCento = peso * 0.8;
	printf("Se engordar 15%%, o peso sera: %.2fkg\n", pesoMais15PorCento);
	printf("Se emagrecer 20%%, o peso sera: %.2fkg\n", pesoMenos20PorCento);
}
