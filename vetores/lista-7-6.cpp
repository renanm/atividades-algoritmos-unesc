#include<stdio.h>

/* Elabore um programa em C/C++ que leia um vetor X com 10 números e calcule e imprima a diferença entre o
maior e o menor elemento existente no vetor, bem como as posições que o maior e o menor ocupam no
conjunto de dados. */

main() {
    int x[10], maior, menor, primeiro=1, indiceMaior, indiceMenor;

    for (int i = 0; i < 10; i++) {
        printf("Numero: ");
        scanf("%d", &x[i]);
        if (primeiro == 1) {
            primeiro = 0;
            maior = x[i];
            menor = x[i];
            indiceMaior = i;
            indiceMenor = i;
        } else if (x[i] > maior) {
            maior = x[i];
            indiceMaior = i;
        } else if (x[i] < menor) {
            menor = x[i];
            indiceMenor = i;
        }
    }

    printf("Diferenca entre o maior e o menor: %d\n", maior - menor);
    printf("Indice do maior: %d\n", indiceMaior);
    printf("Indice do menor: %d\n", indiceMenor);
}