#include<stdio.h>

main()
{
    float salario, contaAtrasada1, contaAtrasada2, sobra;
    printf("Informe o valor do salario:");
    scanf("%f", &salario);
    printf("Informe o valor de uma das contas atrasadas:");
    scanf("%f", &contaAtrasada1);
    printf("Informe o valor da outra atrasada:");
    scanf("%f", &contaAtrasada2);
    sobra = salario - contaAtrasada1 * 1.02 - contaAtrasada2 * 1.02;
    printf("Montante que sobra: R$ %.2f", sobra);
}
