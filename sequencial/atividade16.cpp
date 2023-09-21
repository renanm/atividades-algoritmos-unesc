#include<stdio.h>

main()
{
    float lado1, lado2, area, potenciaNecessaria;
    printf("Informe a dimensao de um dos lados, em metros:");
    scanf("%f", &lado1);
    printf("Informe a dimensao do outro lado, em metros:");
    scanf("%f", &lado2);
    area = lado1 * lado2;
    potenciaNecessaria = area * 18;
    printf("O comodo tem %.2f metros quadrados e precisa de %.2f watts para ser iluminado", area, potenciaNecessaria);
}
    
