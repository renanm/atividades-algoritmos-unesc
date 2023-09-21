#include<stdio.h>

main()
{
	float baseMaior, baseMenor, altura, area;
	printf("Informe a base maior:");
	scanf("%f", &baseMaior);
	printf("Informe a base menor:");
	scanf("%f", &baseMenor);
	printf("Informe a altura:");
	scanf("%f", &altura);
	area = ((baseMaior + baseMenor) * altura) / 2;
	printf("A area do trapezio eh: %.2f", area);
}



