#include<stdio.h>
main()
{
	float n1, n2, divisao;
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	divisao = n1 / n2;
	printf("O resultado da divisao de %.2f por %.2f e: %.2f", n1, n2, divisao);

}
