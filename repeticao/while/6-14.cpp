#include<stdio.h>

/*
14)Fa�a um programa que apresente o menu de op��es a seguir, permita ao usu�rio escolher a op��o 
desejada, receba os dados necess�rios para executar a opera��o e mostre o resultado. Verifique a 
possibilidade de op��o inv�lida e n�o se preocupe com restri��es do tipo sal�rio inv�lido. 
Menu de op��es: 
1. Imposto 
2. Novo sal�rio 
3. Classifica��o 
4. Finalizar o programa 
Digite a op��o desejada.
Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do imposto usando as 
regras a seguir.
Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do imposto usando as 
regras a seguir.
Na op��o 3: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do imposto usando as 
regras a seguir
*/

main() {
	
	int opcao = 0;
	float salario, imposto;
	
	printf("Escolha uma opcao:\n1. Imposto\n2. Novo salario\n3. Classificacao\n4. Finalizar o programa\n");
	scanf("%d", &opcao);
	while (opcao != 4) {
		switch (opcao) {
			case 1:
				printf("Informe o salario:\n");
				scanf("%f", &salario);
				if (salario < 500) {
					imposto = salario * 0.05;
				} else if (salario <= 850) {
					imposto = salario * 0.1;
				} else {
					imposto = salario * 0.15;
				}
				printf("Imposto: R$ %.2f\n", imposto);
				break;
			case 2:
				printf("Informe o salario:\n");
				scanf("%f", &salario);
				if (salario < 450) {
					printf("Aumento de R$ 100\nNovo salario: %f\n", salario + 100);
				} else if (salario < 750) {
					printf("Aumento de R$ 75\nNovo salario: %f\n", salario + 75);
				} else if (salario <= 1500) {
					printf("Aumento de R$ 50\nNovo salario: %f\n", salario + 50);
				} else {
					printf("Aumento de R$ 25\nNovo salario: %f\n", salario + 25);
				}
				break;
			case 3:
				printf("Informe o salario:\n");
				scanf("%f", &salario);
				if (salario <= 700) {
					printf("Mal remunerado\n");
				} else {
					printf("Bem remunerado\n");
				}
				break;
			default:
				printf("Opcao invalida\n");
		}
		
		printf("\nEscolha uma opcao:\n1. Imposto\n2. Novo salario\n3. Classificacao\n4. Finalizar o programa\n");
		scanf("%d", &opcao);
	}
}
