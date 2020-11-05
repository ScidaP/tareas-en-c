#include <stdio.h>

int main () {
	// Ejercicio 1.01
	char cad[100];
	char *punt;
	// Ejercicio 1.02
	punt = cad;
	// punt = &cad[0];
	printf("Escriba un texto en minúsculas.");
	gets(cad);
	int i;
	int cant_voc = 0;
	int cant_cons = 0;
	for (i=0; i < strlen(cad); i++) {
		if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u') {
			cant_voc++;
		}
	}
	
	cant_cons = strlen(cad) - cant_voc;
	printf("%d\n", cant_cons);
	// Ejercicio 1.03
	printf("%p\n", &punt);
	printf("%p\n", punt);
	
	//Ejercicio 1.04
	
	punt += 5;
	
	printf("%c\n", *punt);
	
	//Ejercicio 1.05
	// punt+3 apuntaría al valor que está en la posición de cad[3].
	
	//Ejercicio 1.06
	punt = &cad[0];
	for (i=0;i < strlen(cad); i++) {
		printf("%c", *punt);
		*punt++;
	}
	printf("\n");
	
	//Ejercicio 1.07
	punt = cad;
	for (i=0; i < strlen(cad); i++){
		printf("%c", punt[i]);
	}
	
	return 0;
}
