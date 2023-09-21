#include<stdio.h>

main() {
    int numero;
    printf("Informe o numero: ");
    scanf("%d", &numero);
	printf("Antecessor: %d\n", numero - 1);
	printf("Sucessor: %d\n", numero + 1);
}
