#include<stdio.h>

/* Elabore um programa em C/C++ que entre com 5 n�meros inteiros em um vetor A, e 10 n�meros inteiros 
pares em um vetor B. Construir um vetor I, sendo este a intersec��o dos vetores A e B. Dessa forma, C 
deve ter a capacidade de armazenar no m�ximo 5 elementos. */

main() {
	int a[5], b[10], i[5];
	
	for (int j = 0; j < 10; j++) {
		
		// Preenche o vetor A
		if (j < 5) {
			printf("Numero inteiro para o vetor A: ");
			scanf("%d", &a[j]);
		}
		
		// Preenche o vetor B
		printf("Numero PAR para o vetor B: ");
		scanf("%d", &b[j]);
		while (b[j] % 2 != 0) {
			printf("Invalido! Numero PAR para o vetor B: ");
			scanf("%d", &b[j]);			
		}
	}
	
	// Preenche o vetor I
	int index_i = 0; // ser� usado como contador para a aloca��o dos dados no vetor I
	for (int j = 0; j < 5; j++) {
		if (a[j] % 2 == 0) { // S� faz a itera��o no vetor B se o n�mero for par
			for (int k = 0; k < 10; k++) {
				if (a[j] == b[k]) {
					i[index_i] = a[j];
					index_i++; // incrementa o contador
					break;
				}
			}												
		}
	}

	printf("O vetor I ficou assim: ");
	for (int j = 0; j < index_i ; j++) { // o contador usado no loop anterior � a refer�ncia aqui
		printf("%d ", i[j]);
	}
}
	
