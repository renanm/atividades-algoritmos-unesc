#include<stdio.h>

main() {
    float precoFabrica, lucroDistribuidorPercentual, impostosPercentual;
    printf("Informe o preco de fabrica: ");
    scanf("%f", &precoFabrica);
    printf("Informe o percentual de lucro do distribuidor: ");
    scanf("%f", &lucroDistribuidorPercentual);
    printf("Informe o percentual de impostos: ");
    scanf("%f", &impostosPercentual);
    
    float lucroDistribuidor = precoFabrica * (lucroDistribuidorPercentual/100);
    float impostos = precoFabrica * (impostosPercentual/100);
    float precoFinal = precoFabrica + lucroDistribuidor + impostos;

    printf("Lucro do distribuidor: R$ %.2f\n", lucroDistribuidor);
    printf("Impostos: R$ %.2f\n", impostos);
    printf("Preco final do veiculo: R$ %.2f\n", precoFinal);
}
