#include<stdio.h>

/*
23) No dia da estreia do filme “Os Vingadores – O Ultimato”, um famoso instituto de pesquisa internacional realizou 
uma pesquisa logo após o encerramento do filme. Cada expectador respondeu a um questionário no qual 
constava sua idade, e a sua opinião em relação ao filme: excelente – 3; bom – 2; regular – 1. Elabore um 
algoritmo que receba a idade e a opinião de 10 expectadores, calcule e imprima:
a. A média das idades das pessoas que responderam excelente;
b. A quantidade de pessoas que responderam regular;
c. O percentual de pessoas que responderam bom entre todos os expectadores analisados
*/

main() {
	int i, idade, opiniao, idadesExcelente = 0;
	float mediaIdadeExcelente, percentualBom, totalExcelente = 0, totalBom = 0, totalRegular = 0;
	
	for (i = 0; i < 3; i++) {
		printf("Informe a idade:\n");
		scanf("%d", &idade);
		printf("Sua opiniao sobre o filme:\n3 - Excelente\n2 - Bom\n1 - Regular\n");
		scanf("%d", &opiniao);
		if (opiniao == 3) {
			totalExcelente++;
			idadesExcelente += idade;
		} else if (opiniao == 2) {
			totalBom++;
		} else if (opiniao == 1) {
			totalRegular++;
		} else {
			printf("Opiniao invalida!");
		}
	}
	
	mediaIdadeExcelente = idadesExcelente / totalExcelente;
	percentualBom = 100 * totalBom / i;
	
	printf("Media de idade dos que responderam Excelente: %.2f\n", mediaIdadeExcelente);
	printf("Quantidade de pessoas que responderam Regular: %d\n", totalRegular);
	printf("Percentual de pessoas que responderam Bom: %.2f%%\n", percentualBom);
	
}
