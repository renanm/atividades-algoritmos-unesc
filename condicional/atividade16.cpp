#include <stdio.h>

main() {
	float preco, codigo;
	printf("Informe o preco: ");
	scanf("%f", &preco);
	printf("Informe o codigo de origem: ");
	scanf("%f", &codigo);
	
	if (codigo > 20 && codigo <= 30) {
		printf("Procedencia: Nordeste");
	} else if (codigo > 10 && codigo <= 20) {
		printf("Procedencia: Centro-Oeste");
	} else if (codigo >= 7 && codigo < 10) {
		printf("Procedencia: Sudeste");
	} else if (codigo > 4 && codigo < 7) {
		printf("Procedencia: Nordeste");
	} else if (codigo == 4) {
		printf("Procedencia: Oeste");
	} else if (codigo == 3) {
		printf("Procedencia: Leste");
	} else if (codigo == 2) {
		printf("Procedencia: Norte");
	} else if (codigo == 1) {
		printf("Procedencia: Sul");
	}
}
