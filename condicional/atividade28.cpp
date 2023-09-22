#include<stdio.h>

main() {
	char nome[20];
	float peso, altura, imc;
	printf("Informe o nome: ");
	scanf("%s", nome);
	printf("Informe o peso, em quilos: ");
	scanf("%f", &peso);
	printf("Informe a altura, em metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	printf("Paciente: %s\n", nome);
	printf("Faixa de risco: ");
	
	if (imc <= 20) {
		printf("abaixo do peso");
	} else if (imc <= 25) {
		printf("normal");
	} else if (imc <=30) {
		printf("excesso de peso");
	} else if (imc <= 35) {
		printf("obesidade");
	} else {
		printf("obesidade morbida");
	}

	
}
