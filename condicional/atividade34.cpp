#include<stdio.h>

main() {
	int idade;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	switch(idade) {
		case 0 ... 4:
			printf("Nao classificado");
			break;
		case 5 ... 7:
			printf("Infantil A");
			break;
		case 8 ... 10:
			printf("Infantil B");
			break;
		case 11 ... 13:
			printf("Juvenil A");
			break;
		case 14 ... 17:
			printf("Juvenil B");
			break;
		default:
			printf("Senior");
	}
}
