#include <stdio.h>

main() {
	float nota1, nota2, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("A media e: %.2f\n", media);
	if (media >= 7) {
		printf("O aluno esta APROVADO.");
	} else if (media >= 3) {
		printf("O aluno esta em EXAMES.");
	} else {
		printf("O aluno esta REPROVADO.");
	}
}
