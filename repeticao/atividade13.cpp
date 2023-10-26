#include<stdio.h>

main() {
	int numeroPares = 0, numeroImpares = 0, somaPares = 0, somaImpares = 0, total;
	float percentualPares, percentualImpares;
	int numero;
	
	for (int i = 85; i <= 906; i++) {
		if (i % 2 == 0) {
			numeroPares++;
			somaPares += i;
		} else {
			numeroImpares++;
			somaImpares += i;
		}				
	}
	
	total = numeroImpares + numeroPares;
	percentualPares = 100 * numeroPares / total;
	percentualImpares = 100 * numeroImpares / total;
	
	printf("Numero de pares: %d\n", numeroPares);
	printf("Soma dos numeros pares: %d\n", somaPares);
	printf("Percentual de numeros pares: %.2f%%\n", percentualPares);
	printf("Numero de impares: %d\n", numeroImpares);
	printf("Soma dos numeros impares: %d\n", somaImpares);
	printf("Percentual de numeros impares: %.2f%%\n", percentualImpares);
}
