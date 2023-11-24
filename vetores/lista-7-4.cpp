#include<stdio.h>

/* Elabore um programa em C/C++ que armazene números em dois vetores inteiros de cinco elementos cada (A
e B), gere e imprima o vetor soma. */

main() {
    int a[5], b[5], soma[5];

    for (int i = 0; i < 5; i++) {
        printf("Numero da posicao %d do vetor A: ", i);
        scanf("%d", &a[i]);
        printf("Numero da posicao %d do vetor B: ", i);
        scanf("%d", &b[i]);
        soma[i] = a[i] + b[i];        
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", soma[i]);
    }
}