#include<stdio.h> 

main() {
	int lado1, lado2, lado3;
	printf("Informe o tamanho do lado 1: ");
	scanf("%d", &lado1);
	printf("Informe o tamanho do lado 2: ");
	scanf("%d", &lado2);
	printf("Informe o tamanho do lado 3: ");
	scanf("%d", &lado3);
	
	if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado1 + lado2) {
		printf("Nao e triangulo");
	} else if (lado1 == lado2 && lado2 == lado3) {
		printf("Triangulo equilatero");
	} else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
		printf("Triangulo isosceles");
	} else {
		printf("Triangulo escaleno");
	}
	
}
