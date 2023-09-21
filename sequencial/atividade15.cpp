#include<stdio.h>

main()
{
    float tempCelsius, tempFarenheit;
    printf("Informe a temperatura em graus Celsius:");
    scanf("%f", &tempCelsius);
    tempFarenheit = 180 * (tempCelsius/100) + 32;
    printf("Temperatura em Farenheit: %.2f graus", tempFarenheit);
}
