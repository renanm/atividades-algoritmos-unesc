#include<stdio.h>

main()
{
	float lado, area;
	printf("Informe o tamanho do lado do quadrado:");
	scanf("%f", &lado);
	area = lado * lado;
	printf("A area do quadrado e %.2f", area);
}
