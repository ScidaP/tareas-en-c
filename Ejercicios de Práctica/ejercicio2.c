#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void invertirPalabra(char *pPalabra) {
    char palabraInvertida[30];
    int aux = strlen(pPalabra), i = 0, j = aux;
    for (int k = 0; k < aux; k++) { // Convierte todas las letras a mayúscula, para que no hayan errores si el usuario ingresa mayusculas.
            toupper(pPalabra);
            pPalabra++;
    }

    for (i; i < aux; i++) {
        palabraInvertida[i] = pPalabra[j-1];
        j--;
    }
    palabraInvertida[i] = '\0';

    if (strcmp(palabraInvertida, pPalabra) == 0) {
        puts("La palabra ingresada es palindroma");
    } else {
        puts("La palabra no es palindroma.");
    }
}

int main() {
    char palabra[30];
    puts("Ingrese una palabra para invertir");
    fflush(stdin);
    gets(palabra);
    invertirPalabra(palabra);
    return 0;
}