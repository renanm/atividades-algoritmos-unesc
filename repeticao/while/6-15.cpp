#include<stdio.h>

/*
15) Fa�a um programa que receba os dados a seguir de v�rios produtos: pre�o unit�rio, pa�s de origem 
(1 � Estados Unidos; 2 � M�xico; e 3 � outros), meio de transporte (T � terrestre; F � fluvial; e A �
a�reo), carga perigosa (S � sim; N � n�o), finalize a entrada de dados com um pre�o inv�lido, ou seja, 
menor ou igual a zero. O programa deve calcular e mostrar os itens a seguir.
? O valor do imposto, usando a tabela a seguir.
? O valor do transporte usando a tabela a seguir.
? O valor do seguro, usando a regra a seguir.
Os produtos que v�m do M�xico e os produtos que utilizam transporte a�reo pagam metade do 
valor do seu pre�o unit�rio como seguro.
? O pre�o final, ou seja, pre�o unit�rio mais imposto mais valor do transporte mais valor do seguro.
? O total dos impostos.
*/

main() {
	float precoUnitario, imposto, custoTransporte, seguro = 0., totalImpostos = 0., custoTotal = 0.;
	int paisOrigem;
	char transporte, perigosa;
	
	
	printf("Informe o preco unitario:\n");
	scanf("%f", &precoUnitario);
	
	while (precoUnitario > 0) {
		printf("Informe o pais de origem:\n1 - Estados Unidos\n2 - Mexico\n3 - Outros\n");
		scanf("%d", &paisOrigem);
		printf("Informe o meio de transporte:\nT - terrestre\nF - Fluvial\nA - aereo\n");
		fflush(stdin);
		scanf("%c", &transporte);
		printf("Carga perigosa?\nS - sim\nN - nao\n");
		fflush(stdin);
		scanf("%c", &perigosa);
		
		// imposto
		if (precoUnitario < 100) {
			imposto = precoUnitario * 0.05;
		} else {
			imposto = precoUnitario * 0.1;
		}
		printf("Imposto: R$ %.2f\n", imposto);
		totalImpostos += imposto;
		
		// transporte
		switch(paisOrigem) {
			case 1:
				if (perigosa == 'S' || perigosa == 's') {
					custoTransporte = 50.;
				} else {
					custoTransporte = 12.;
				}
				break;
			case 2:
				custoTransporte = 21.;
				break;
			case 3:
				if (perigosa == 'S' || perigosa == 's') {
					custoTransporte = 24.;
				} else {
					custoTransporte = 60.;
				}
				break;
			} // fim do switch
		printf("Custo do transporte: R$ %.2f\n", custoTransporte);
			
		
		// seguro
		if (paisOrigem == 2 || transporte == 'A' || transporte == 'a') {
			seguro = precoUnitario / 2;
		}
		printf("Custo do seguro: R$ %.2f\n", seguro);
		
		// resumo deste produto
		printf("Preco final deste produto: R$ %.2f\n", precoUnitario + imposto + seguro + custoTransporte);
		custoTotal += precoUnitario + imposto + seguro + custoTransporte;	
		
		
		// nova leitura
		printf("\nInforme o preco unitario:\n");
		scanf("%f", &precoUnitario);
		
	} // fim do loop while
	
	printf("\nPreco final de TUDO: R$ %.2f\n", custoTotal);
	printf("Total dos impostos em todos os produtos: R$ %.2f\n", totalImpostos);
		
}
