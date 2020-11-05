#include <stdio.h>
#include <stdlib.h>

void calcularEstadisticas(float *registro, int cantidad);

int main () {
	float *p_registroLluvias;
	int cant;
	printf("Ingrese la cantidad de registros.");
	scanf("%d", &cant);

	//Creo el arreglo de forma dinámica
	p_registroLluvias = malloc(cant*sizeof(int));
	
	for (int i = 0; i < cant; i++) {
		printf("Ingrese el registro #%d\n", i);
		scanf("%d", &p_registroLluvias[i]);
	}
	
	calcularEstadisticas(p_registroLluvias, cant);
}

void calcularEstadisticas(float *registro, int cantidad) {
	//Calcular el mayor número del array
	float mayor = 0;
	for (int i = 0; i < cantidad; i++){
		if (registro[i] > mayor) {
			mayor = registro[i];
		}
	}
	printf("El numero mayor es %d", mayor);
}
