#include <stdio.h>
#include <stdlib.h>

void calcuarEstadisticas(float *registro, int cantidad);

int main () {
	float *p_registroLluvias;
	int cant;
	printf("Ingrese la cantidad de registros.");
	scanf("%d", &cant);

	//Creo el arreglo de forma dinámica
	p_registroLluvias = malloc(cant*sizeof(int));
	
	for (int i = 0; i < cant; i++) {
		printf("Ingrese el registro #%d\n", i);
		scanf("%f", &p_registroLluvias[i]);
	}
	
	calcuarEstadisticas(p_registroLluvias, cant);
	free(p_registroLluvias);
}

void calcuarEstadisticas(float *registro, int cantidad) {
	//Calcular el mayor número del array
	float mayor = 0;
	for (int i = 0; i < cantidad; i++){
		if (registro[i] > mayor) {
			mayor = registro[i];
		}
	}
	//Calcular el menor número del array
	float menor = mayor;
	for (int k = 0; k < cantidad; k++) {
		if (registro[k] < menor) {
			menor = registro[k];
		}
	}
	//Calcular el promedio de los números del array
	float total, promedio;
	for (int j = 0; j < cantidad; j++) {
		total += registro[j];
		promedio = total / cantidad;
	}
	
	printf("El numero mayor es %f\n", mayor);
	printf("El numero menor es %f\n", menor);
	printf("El promedio de todos los números del array es %f", promedio);
}
