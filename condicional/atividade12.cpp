#include <stdio.h>

main() {
	float saldoMedio;
	printf("Informe o saldo medio no ultimo ano: ");
	scanf("%f", &saldoMedio);
	if (saldoMedio > 4000) {
		printf("Credito especial: R$ %.2f", saldoMedio * 0.3);
	} else if (saldoMedio > 3000) {
		printf("Credito especial: R$ %.2f", saldoMedio * 0.25);
	} else if (saldoMedio > 2000) {
		printf("Credito especial: R$ %.2f", saldoMedio * 0.2);
	} else {
		printf("Credito especial: R$ %.2f", saldoMedio * 0.1);
	}
}
