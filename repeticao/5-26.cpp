#include<stdio.h>

/*
26) Elabore um algoritmo que leia duas notas de 6 alunos, calcule e mostre:
a. A média aritmética das duas notas de cada aluno;
b. A mensagem, conforme tabela a seguir:
Média Aritmética Mensagem
Até 3.0 Reprovado
Entre 3.0 e 7.0 Exame
Acima de 7.0 Aprovado
c. O total de alunos aprovados;
d. O total de alunos de exame;
e. O total de alunos reprovados;
f. A média da classe.
*/

main() {
	float n1, n2, totalNotas, media, mediaClasse;
	int aprovados = 0, exame = 0, reprovados = 0;
	
	for (int i = 1; i <= 6; i++) {
		printf("Aluno %d:\n", i);
		printf("Nota 1: ");
		scanf("%f", &n1);
		printf("Nota 2: ");
		scanf("%f", &n2);
		
		totalNotas += n1 + n2;
		media = (n1 + n2) / 2;
		
		if (media > 7) {
			printf("Aprovado\n");
			aprovados++;
		} else if (media > 3) {
			printf("Exame\n");
			exame++;
		} else {
			printf("Reprovado\n");
			reprovados++;
		}		
	}
	
	mediaClasse = totalNotas / 12;
	
	printf("%d aluno(s) aprovado(s)\n", aprovados);
	printf("%d aluno(s) em exame\n", exame);
	printf("%d aluno(s) reprovado(s)\n", reprovados);
	printf("Media da classe: %f\n", mediaClasse);
	
}
