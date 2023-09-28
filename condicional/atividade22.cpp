#include<stdio.h>

main() {
	char pessoa1[20], pessoa2[20];
	float peso1, peso2;
	
	printf("Informe o nome da primeira pessoa: ");
	gets(pessoa1);
	printf("Informe o peso dessa pessoa: ");
	scanf("%f", &peso1);
	printf("Informe o nome da segunda pessoa: ");
	fflush(stdin);
	gest(pessoa2);
	printf("Informe o peso dessa pessoa: ");
	scanf("%f", &peso2);
	
	if (peso1 > peso2) {
		printf("Pessoa de maior peso: %s", pessoa1);
	} else if (peso1 < peso2) {
		printf("Pessoa de maior peso: %s", pessoa2);
	} else {
		printf("Os pesos de %s e %s sao iguais", pessoa1, pessoa2);
	}
}
