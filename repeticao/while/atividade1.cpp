#include<stdio.h>

main() {
	char letra;
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	while (letra != 'f' && letra != 'F') {
		printf("%c", letra);
		fflush(stdin);
		printf("\nInforme uma letra: ");
		scanf("%c", &letra);		
	}
}
