#include<stdio.h>

/* Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados
*/


main() {
    int a[5], maior, menor;
    float media, total;

    for (int i = 0; i < 5; i++) {
        printf("Escola um número: ");
        scanf("%d", &a[i]);
        if (i == 0) {
            maior = a[i];
            menor = a[i];
        } else if (a[i] > maior) {
            maior = a[i];
        } else if (a[i] < menor) {
            menor = a[i];
        }
        total += a[i];
    }

    media = total / 5;

    printf("\nTodos os elementos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    printf("\nMaior: %d\n", maior);
    printf("\nMenor: %d\n", menor);
    printf("\nMenor: %f\n", media);
}