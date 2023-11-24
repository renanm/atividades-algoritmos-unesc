#include<stdio.h>

/* 5) Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T
triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3. */

main() {
    int a[5], t[5];

    for (int i = 0; i < 5; i++) {
        printf("Numero: ");
        scanf("%d", &a[i]);
        t[i] = a[i] * 3;        
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", t[i]);
    }
}