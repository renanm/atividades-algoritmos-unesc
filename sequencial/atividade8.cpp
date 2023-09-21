#include<stdio.h>

main()
{
	float pesoEmQuilos, pesoEmGramas;
	printf("Informe o peso em quilos: ");
	scanf("%f", &pesoEmQuilos);
	pesoEmGramas = pesoEmQuilos * 1000;
	printf("O peso equivale a %.0f gramas", pesoEmGramas);
}
