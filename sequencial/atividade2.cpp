#include<stdio.h>

main()
{
	int n1, n2, n3, resultado;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe outro numero: ");
	scanf("%d", &n2);
	printf("Informe outro numero: ");
	scanf("%d", &n3);
	resultado = n1 * n2 * n3;
	printf("%d * %d * %d = %d", n1, n2, n3, resultado);
}
