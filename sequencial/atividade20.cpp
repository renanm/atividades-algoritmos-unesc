#include<stdio.h>

main() {
    int a, b, temp;
    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Novo valor de A: %d\n", a);
    printf("Novo valor de B: %d\n", b);
}
