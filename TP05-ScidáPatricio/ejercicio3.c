#include <stdio.h>

int main() {
	printf("Ingrese la cantidad de numeros que quiere ingresar.");
	int max;
	int cad[max];
	scanf("%d", &max);
	int *punt;
	punt = cad;
	
	int i;
	
	for (i = 0; i < max; i++) {
		printf("Ingrese el numero %d:", i);
		scanf("%d", cad[i]);
	}
	
	punt = &cad[0];
	for (i=0; i < max; i++) {
		punt++;
		printf("%d", *punt);
	}
}
