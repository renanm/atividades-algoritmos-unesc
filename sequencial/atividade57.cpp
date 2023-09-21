#include<stdio.h>
#include<math.h>

main() {
	float alturaDegrau, alturaDesejada, degraus;
    printf("Informe a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Informe a altura que deseja alcancar: ");
    scanf("%f", &alturaDesejada);    
    degraus = ceil(alturaDesejada / alturaDegrau);    
    printf("Numero de degraus a subir: %.0f\n", degraus);
}
