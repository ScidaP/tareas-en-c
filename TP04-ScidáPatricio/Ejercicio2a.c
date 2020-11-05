#include <stdio.h>
#include <string.h>

int main() {
	char nombre[30], apellido[30];
	
	printf("Ingrese su nombre");
	gets(nombre);
	printf("Ingrese su apellido");
	gets(apellido);

	char nombreCompleto[65];
	int i;
	for (i=0; i < strlen(nombre);i++) {
		nombreCompleto[i] = nombre[i];
		nombreCompleto[i+strlen(nombre)] = apellido[i];
	}
	printf("%s", nombreCompleto);
	return 0;
}
