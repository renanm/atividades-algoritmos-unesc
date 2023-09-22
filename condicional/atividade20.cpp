#include<stdio.h>

main () {
	float horasExtras, horasFaltas, h, premio;
	printf("Informe o numero de horas extras: \n");
	scanf("%f", &horasExtras);
	printf("Informe o numero de horas com falta: \n");
	scanf("%f", &horasFaltas);
	h = horasExtras - (2/3.0 * horasFaltas);
	if (h >= 2400) {
		premio = 500;
	} else if (h >= 1800) {
		premio = 400;
	} else if (h >= 1200) {
		premio = 300;
	} else if (h >= 600) {
		premio = 200;
	} else {
		premio = 100;
	}
	
	printf("Valor de H: %.1f\n", h);
	printf("Premio a ser recebido: R$ %.2f", premio);
		
}
