#include<stdio.h>

main()
{
	float diagonalMaior, diagonalMenor, area;
	printf("Informe o tamanho da diagnonal maior:");
	scanf("%f", &diagonalMaior);
	printf("Informe o tamanho da diagonal menor:");
	scanf("%f", &diagonalMenor);
	area = (diagonalMaior * diagonalMenor) / 2;
	printf("A area do losango e %f", area);
}
