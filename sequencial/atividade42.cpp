#include<stdio.h>

main() {
    float medidaPes, medidaJardas, medidaMilhas, medidaPolegadas;
    printf("Informe a medida em pes: ");
    scanf("%f", &medidaPes);
    medidaJardas = medidaPes / 3;
    medidaMilhas = medidaJardas / 1760;
    medidaPolegadas = medidaPes * 12;
    printf("Polegadas: %.2f\n", medidaPolegadas);
    printf("Jardas: %.2f\n", medidaJardas);
    printf("Milhas: %.2f\n", medidaMilhas);
}
