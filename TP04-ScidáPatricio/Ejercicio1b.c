#include <stdio.h>
#include <string.h>

int main () {
	char arreglo[20];
	
	printf("Ingrese 20 numeros.");
	
	int i;
	int numeroIngresado;
	for (i = 0; i < 20; i++){
		printf("Numero %d:", i);
		scanf("%d", &numeroIngresado);
		arreglo[i] = numeroIngresado;
	}
	printf("\n");
	int k = 0;
	int sumaPares = 0;
	while (k < 20) {
		sumaPares += arreglo[k];
		k+=2;
		printf("Suma parcial pares: %d\n", sumaPares);
	}
	int sumaImpares = 0;
	for (k=1;k < 20; k+=2) {}d}
		sumaImpares += arreglo[k];
		printf("Suma parcial impares: %d\n", sumaImpares);
	}
	printf("\n Suma total de los indices pares de arreglo: %d", sumaPares);
	printf("\n Suma total de los indices pares de arreglo: %d", sumaImpares);
	return 0;
}
