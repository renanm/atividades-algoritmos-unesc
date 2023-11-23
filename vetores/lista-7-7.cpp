#include<stdio.h>

/* Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e imprima o índice do
primeiro número negativo, se houver. Caso não existam números negativos, imprimir a seguinte mensagem
“Negativo não encontrado”.
*/


main() {
    int a[5], indiceNegativo = 6;

    for (int i = 0; i < 5; i++) {
        printf("Escola um número: ");
        scanf("%d", &a[i]);
        if (a[i] < 0 && indiceNegativo == 6) {
            indiceNegativo = i;
        }
    }

    if (indiceNegativo < 6) {
        printf("Indice do primeiro negativo: %d", indiceNegativo);
    } else {
        printf("Negativo nao encontrado");
    }
}