#include<stdio.h>

main()
{
	float preco, desc, pfinal;
	printf("Informe o preco: ");
	scanf("%f", &preco);
	desc = preco * 0.1;
	pfinal = preco - desc;
	printf("Desconto: %.2f\n", desc);
	printf("Preco final: %.2f\n", pfinal);
	
}
