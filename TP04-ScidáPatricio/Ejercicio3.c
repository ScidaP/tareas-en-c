#include <stdio.h>
#include <string.h>

int main() {
	invertirPalabras();
}

void invertirPalabras() {
	printf("Ingrese el texto a traducir\n");
	char texto[100];
	gets(texto);
	char textoTraducido[100];
	int i;
	int j = 0;
	for (i=strlen(texto) - 1;i >= 0; i--) {
		textoTraducido[j] = texto[i];
		j++;
	}
	printf("Texto inicial: %s\n", texto);
	printf("Texto traducido: %s", textoTraducido);
	return 0;
}
