#include <stdio.h>
#include <string.h>

int main() {
	char nombreCompleto[40];
	printf("Ingrese su nombre completo");
	gets(nombreCompleto);
	int i;
	int cant_a = 0;
	int cant_e = 0;
	int cant_i = 0;
	int cant_o = 0;
	int cant_u = 0;
	
	for (i=0;i < strlen(nombreCompleto); i++) {
		if (nombreCompleto[i] == 'a') {
			cant_a++;
		} else if (nombreCompleto[i] == 'e') {
			cant_e++;
		} else if (nombreCompleto[i] == 'i') {
			cant_i++;
		} else if (nombreCompleto[i] == 'o') {
			cant_o++;
		} else if (nombreCompleto[i] == 'u') {
			cant_u++;
		}
	}
	printf("Letras A: %d\n", cant_a);
	printf("Letras E: %d\n", cant_e);
	printf("Letras I: %d\n", cant_i);
	printf("Letras O: %d\n", cant_o);
	printf("Letras U: %d\n", cant_u);
	return 0;
}
