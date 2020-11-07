#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int buscar(char *p_cadena, char enBusca, int tam);

int main () {
	char *p_cadena;
	int tam, enBusca;
	
	puts("Ingrese la cantidad de caracteres que desea usar\n");
	scanf("%d", &tam);
	
	// Creo el arreglo de forma dinámica
	p_cadena = malloc(tam*sizeof(char));
	fflush(stdin);
	printf("Ingrese la cadena.\n");
	gets(p_cadena);
	fflush(stdin);
	printf("Ingrese el carácter que quiere buscar.\n");
	scanf("%c", &enBusca);
	buscar(p_cadena, enBusca, tam);
}

int buscar(char *p_cadena, char enBusca, int tam) {
	int encontrado = 0;
	int i;
	for (i=0; i < tam; i++) {
		if(p_cadena[i] == enBusca) {
			encontrado = 1;
			break;
		}
	}
	
	if (encontrado == 1) {
		printf("%c se encontro en la posicion %d\n", enBusca, i+1);
	} else {
		printf("%c no se encontro en la cadena", enBusca);
	}
}
