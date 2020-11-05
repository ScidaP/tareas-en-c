#include <stdio.h>
#include <string.h>

int main() {
	int MAX;
	scanf("%d", &MAX);
	int mazo[MAX];
	leerMazoEntero();
	dividirMazo();
	return 0;
}

int leerMazoEntero() {
	printf("Ingrese la cantidad de cartas en el mazo\n");
	int i;
	for (i=0;i<MAX;i++) {
		printf("Ingrese la carta %d\n", i);
		scanf("%d", &mazo[i]);
	}
		
	int k;
	printf("Su mazo es: \n");
	for (k=0;k<MAX;k++) {
		printf("%d", mazo[k]);
		printf("  ");
	}
}

int dividirMazo(){
	int i;
	for (i=0; i < strlen())
}
