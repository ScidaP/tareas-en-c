#include <stdio.h>

int main() {
	int inicio, fin, contadorNumeros = 0, contadorPares = 0, sumaImpares = 0, i;
	
	printf("Escriba dos numeros.\n");
	printf("Primero escriba el número más chico");
	scanf("%d", &inicio);
	printf("Ahora escriba el número más grande");
	scanf("%d", &fin);
	
	for (i=inicio; i < fin; i++){
		contadorNumeros++;
		if (i % 2 == 0) {
			contadorPares++;
		} else if (i % 2 != 0) {
			sumaImpares = sumaImpares + i;
		}
	}
	printf("La cantidad de números entre %d y %d, es de %d\n", inicio, fin, contadorNumeros);
	printf("La cantidad de numeros pares es de %d\n", contadorPares);
	printf("La suma de numeros impares es de %d\n", sumaImpares);
	return 0;
}
