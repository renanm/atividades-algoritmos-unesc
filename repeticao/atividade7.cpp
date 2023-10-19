#include<stdio.h>

main() {
	int total;
	
	for (int i = 100; i <= 105; i++) {
		printf("%d\n", i);
		total += i;
	}
	
	printf("Soma: %d\n", total);
}
