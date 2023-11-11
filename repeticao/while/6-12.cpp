#include<stdio.h>

/*
12) Fa�a um programa que receba o sal�rio de um funcion�rio chamado Carlos. Sabe-se que outro 
funcion�rio, Jo�o, tem sal�rio equivalente a um ter�o do sal�rio de Carlos. Carlos aplicar� seu sal�rio 
integralmente na caderneta de poupan�a, que rende 2% ao m�s, e Jo�o aplicar� seu sal�rio 
integralmente no fundo de renda fixa, que rende 5% ao m�s. O programa dever� calcular e mostrar a 
quantidade de meses necess�rios para que o valor pertencente a Jo�o iguale ou ultrapasse o valor 
pertencente a Carlos.
*/

main() {
	float salarioCarlos, salarioJoao;
	int mesesDecorridos = 0;

	printf("Salario de Carlos: ");
	scanf("%f", &salarioCarlos);
	salarioJoao = salarioCarlos / 3;
	
	while (salarioCarlos > salarioJoao) {
		salarioJoao *= 1.05;
		salarioCarlos *= 1.02;
		mesesDecorridos += 1;		
	}
	
	printf("Meses necessarios: %d", mesesDecorridos);
}
