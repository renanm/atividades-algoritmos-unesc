#include<stdio.h>

/*Elabore um programa em C/C++ que entre com 7 números inteiros e imprima uma listagem contendo os 7
números.
*/

main() {
    int numeros[7];
    for (int i = 0; i < 7; i++) {
        printf("Escola um número: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\n", numeros[i]);
    }
}
