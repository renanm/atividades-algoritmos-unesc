#include<stdio.h>
#include<math.h>

main() {
    float numero;
    printf("Informe o numero: ");
    scanf("%f", &numero);
	printf("Numero informado (%.2f) ao quadrado: %f\n", numero, pow(numero, 2));
	printf("Numero informado ao cubo: %f\n", pow(numero, 3));
	printf("Raiz quadrada do numero informado: %f\n", sqrt(numero));
	printf("Raiz cubica do numero informado: %f\n", cbrt(numero));
}
