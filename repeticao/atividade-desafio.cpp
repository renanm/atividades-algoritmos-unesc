#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int dificuldade = 5, chances, secreto, chute = -1, tentativas = 1;
	float pontuacao = 1000;
	
	srand(time(NULL));
	secreto = rand() % 1000;
	
	while (dificuldade < 1 or dificuldade > 3) {
		printf("Escolha a dificuldade:\n1 - Facil\n2 - Medio\n3 - Dificil\n");
		scanf("%d", &dificuldade);
		switch(dificuldade) {
			case 1:
				chances = 20;
				break;
			case 2:
				chances = 15;
				break;
			case 3:
				chances = 5;
				break;
			default:
				printf("Opcao invalida.\n");
		}
	}
	
	while (tentativas <= chances) {
		printf("\nTentativa %d/%d: Escolha um numero: ", tentativas, chances);
		scanf("%d", &chute);
		if (chute < 0) {
			printf("Voce nao pode chutar numeros negativos.\n");
			continue;
		}
				
		if (chute > secreto) {
			printf("Seu chute foi MAIOR que o numero secreto\n");
			pontuacao -= (chute - secreto) / 2.0;
		} else if (chute < secreto) {
			printf("Seu chute foi MENOR que o numero secreto\n");
			pontuacao -= (secreto - chute) / 2.0;
		} else {
			printf("\nVOCE GANHOU!\n");
			printf("Voce acertou em %d tentativa(s)\n", tentativas);
			printf("Total de pontos: %.1f\n", pontuacao);
			break;
		}
		tentativas++;			
	}
	
	if (tentativas > chances) {
		printf("\nFim de jogo. Voce perdeu! Tente novamente.\n");		
	}
	
}
