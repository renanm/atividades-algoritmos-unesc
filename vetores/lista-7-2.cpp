#include<stdio.h>

/* Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos do vetor, em ordem normal e ordem inversa
*/


main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        printf("Escola um número: ");
        scanf("%d", &a[i]);
    }

    printf("\nOrdem normal:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    printf("\nOrdem inversa:\n"); 
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
}