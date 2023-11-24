#include<stdio.h>

/* 26) Uma empresa possui ônibus com 48 lugares (24 nas janelas e 24 no corredor). Faça um programa que utilize
dois vetores para controlar as poltronas ocupadas no corredor e nas janelas. Considere que 0 (zero)
representa poltrona desocupada e 1 poltrona ocupada.
Inicialmente, todas as poltronas estarão livres. Depois disso, o programa deverá apresentar as seguintes
opções:
M E N U
1-Vender passagem
2- Mostrar mapa de ocupação do ônibus
3- Encerrar
Quando a opção escolhida for (1) Vender Passagem, deverá ser perguntado se o usuário deseja janela ou
corredor e o número de poltrona. O programa deverá então, dar uma das seguintes mensagens:
 Venda efetivada – se a poltrona solicitada estiver livre, marcando-a como ocupada.
 Poltrona ocupada – se a poltrona solicitada não estiver disponível para venda.
 Ônibus lotado – quando todas as poltronas já estiverem ocupadas.
Quando a opção escolhida for (2)Mostrar Mapa de Ocupação do Ônibus, deverá ser mostrada uma listagem
conforme a seguir:
JANELA CORREDOR
1 - Ocupada 1 - Ocupada
2 - Ocupada 2 - Livre
3 - Livre 3 - Livre
4 - Livre 4 - Ocupada
5 - Ocupada 5 - Livre
......
Quando for escolhida a opção (3) encerrar, a execução do programa deverá ser finalizada */

main() {
    int janela[24], corredor[24], opcao, janelaOuCorredor, poltrona;

    for (int i = 0; i < 24; i++) {
        janela[i] = 0;
        corredor[i] = 0;
    }

    printf("MENU:\n1 - Vender passagem\n2 - Mostrar mapa de ocupação do ônibus\n3 - Encerrar\n");
    scanf("%d", &opcao);

    while (opcao != 3) {
        switch(opcao) {
            case 1:
                printf("Janela ou corredor?\n1 - Janela\n2 - Corredor");
                scanf("%d", &janelaOuCorredor);
                printf("Numero da poltrona:\n");
                scanf("%d", &poltrona);
                if (poltrona > 23) {
                    printf("Poltrona inexistente!\n");
                    break;
                }
                poltrona = poltrona - 1; // o índice da poltrona é um a menos
                if (janelaOuCorredor == 1 && janela[poltrona] == 0) {
                    printf("Venda efetivada.\n");
                    janela[poltrona] = 1;
                } else if (janelaOuCorredor == 2 && corredor[poltrona] == 0) {
                    printf("Venda efetivada.\n");
                    corredor[poltrona] = 1;
                } else {
                    // verifica se o ônibus está lotado
                    for (int i = 0; i < 24; i++) {

                        // situação em que uma poltrona vazia é encontrada, ou seja, o ônibus NÃO está lotado
                        if (janela[i] == 0 || corredor[i] == 0) {
                            printf("Poltrona ocupada.\n");
                            break;
                        }

                        // depois de verificar as últimas potronas
                        if (i == 23) {
                            printf("Onibus lotado.\n");
                        }
                    }
                }
                break;
            
            case 2:
                printf("JANELA\tCORREDOR\n");
                for (int i = 0; i < 24; i++) {
                    if (janela[i] == 0) {
                        printf("%d - Livre\t", i + 1);
                    } else {
                        printf("%d - Ocupada\t", i + 1);
                    }
                    if (corredor[i] == 0) {
                        printf("%d - Livre\n", i + 1);
                    } else {
                        printf("%d - Ocupada\n", i + 1);
                    }
                }
                break;
            default:
                printf("Opcao invalida!\n");
        }
        printf("\nMENU:\n1 - Vender passagem\n2 - Mostrar mapa de ocupação do ônibus\n3 - Encerrar");
        scanf("%d", &opcao);
    }
}