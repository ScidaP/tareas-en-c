#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () { // Este código funciona solamente si el usuario ingresa exactamente
			  // cuantos caracteres desea + 1 ( + 1 por la marca final (\0)).
	char *p_nombreCompleto;
	int tam;
	
	puts("Ingrese la cantidad de caracteres que desea usar");
	scanf("%d", &tam);
	
	// Creo el arreglo de forma dinámica
	p_nombreCompleto = malloc(tam*sizeof(char));
	fflush(stdin);
	printf("\nIngrese su nombre completo. Primero sus apellidos, y sus nombres. Separe los apellidos de los nombres con una coma (,).\n");
	gets(p_nombreCompleto);
	
	int marca; // Esta variable detecta en que posición terminan los apellidos (toma el valor de i, cuando i = ',')
	int cantApellidos = 0, cantNombres = 0;
	for (int i=0; i < tam; i++) {
		if (p_nombreCompleto[i] == ' ') {
			cantApellidos++;
		}
		if (p_nombreCompleto[i] == ',') {
			cantApellidos++;
			cantNombres++;
			marca = i;
			break;
		}
	}
	
	for (int j=0; j < tam-marca; j++) {
		if (p_nombreCompleto[marca + j] == ' ') {
			cantNombres++;
		}
		j++;
	}
	printf("La cantidad de apellidos es de %d\n", cantApellidos);
	printf("La cantidad de nombres es de %d", cantNombres);
}
