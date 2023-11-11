#include<stdio.h>

/*
25) Elabore um algoritmo que imprima a tabuada de 1 a 10.
*/

main() {
	for (int i = 1; i <= 10 ; i++) {
		printf("Tabuada de %d:\n", i);
		for (int j = 1; j <= 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}		
	}	
}
