#include<stdio.h>

/* Elabore um programa em C/C++ que entre com 5 números inteiros em dois vetores A e B. Construir um vetor 
C, sendo este a junção dos vetores A e B. Dessa forma, C deve ter o dobro de elementos dos vetores A e B. 
Ao final, imprima os elementos dos 3 vetores */

main() {
	int a[5], b[5], c[10];
	
	for (int i = 0; i < 5; i++) {
		printf("Numero para o vetor A: ");
		scanf("%d", &a[i]);
		printf("Numero para o vetor B: ");
		scanf("%d", &b[i]);
		c[i] = a[i];
		c[i + 5] = b[i];
	}
	
	printf("\nVetor A:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	
	printf("\n\nVetor B:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", b[i]);
	}
	
	printf("\n\nVetor C:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", c[i]);
	}
	
}
