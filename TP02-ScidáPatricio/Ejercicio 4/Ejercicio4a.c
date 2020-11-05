#include <stdio.h>

int main() {
	int i = 0, vocales = 0;
	char texto[100];
	
	fflush(stdin);
	printf("Escriba una frase de menos de 100 caracteres y con punto final.\n");
	scanf("%s", &texto);
	
	while (texto[i] != '.') {
		if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' 
		|| texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') {
			vocales++;
		}
		i++;
	}
	fflush(stdin);
	printf("La cantidad de vocales en la frase es de: %d", vocales);
	
	return 0;
}
