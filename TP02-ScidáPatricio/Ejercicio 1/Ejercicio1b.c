#include <stdio.h>

int main() {
	int i, j, k, aux;
	for (i=1; i<=7; i++) {
		for (j=1; j<=1; j++) {
			printf("%d", j);
		}
		aux = 0;
		for (k=i+1; k <=8; k++) {
			aux = aux + 1;
			printf("%d", aux);
		}
		printf("\n");
	}
}
