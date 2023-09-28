#include<stdio.h>

main() {
	int numeroMes;
	printf("Informe o numero do mes: ");
	scanf("%d", &numeroMes);
	
	switch(numeroMes) {
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
		default:
			printf("Mes inexistente nesse numero");
	}
	
	/*
	if (numeroMes == 1) {
		printf("Janeiro");
	} else if (numeroMes == 2) {
		printf("Fevereiro");
	} else if (numeroMes == 3) {
		printf("Marco");
	} else if (numeroMes == 4) {
		printf("Abril");
	} else if (numeroMes == 5) {
		printf("Maio");
	} else if (numeroMes == 6) {
		printf("Junho");
	} else if (numeroMes == 7) {
		printf("Julho");
	} else if (numeroMes == 8) {
		printf("Agosto");
	} else if (numeroMes == 9) {
		printf("Setembro");
	} else if (numeroMes == 10) {
		printf("Outubro");
	} else if (numeroMes == 11) {
		printf("Novembro");
	} else if (numeroMes == 12) {
		printf("Dezembro");
	} else {
		printf("Mes inexistente com esse numero");
	}
	*/
	
}
