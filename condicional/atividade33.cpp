#include<stdio.h>

main() {
	int codigo;
	printf("Informe o codigo: ");
	scanf("%d", &codigo);
	
	switch(codigo) {
		case 1:
			printf("Alimento nao perecivel");
			break;
		case 2 ... 4:
			printf("Alimento perecivel");
			break;
		case 5 ... 6:
			printf("Vestuario");
			break;
		case 7:
			printf("Higiene pessoal");
			break;
		case 8 ... 15:
			printf("Limpeza e utensilios domesticos");
			break;
		default:
			printf("Incorreto");
	}
}
