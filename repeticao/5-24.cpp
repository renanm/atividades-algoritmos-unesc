#include<stdio.h>

/*
24) Elabore um algoritmo que imprima a tabuada de um número que será informado pelo usuário.
*/

main() {
	int numero;
	
	printf("Informe um numero:\n");
	scanf("%d", &numero);	
	
	for (int i = 1; i <= 10 ; i++) {
		printf("%d * %d = %d\n", numero, i, numero * i);
	}
	
}
