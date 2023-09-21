#include<stdio.h>
main()
{
	float nota1, nota2, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	media = (nota1 * 2 + nota2 * 3) / 5;
	printf("A media ponderada eh: %f", media);
	
}
