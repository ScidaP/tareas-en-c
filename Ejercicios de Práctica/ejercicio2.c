#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirPalabra(char *pPalabra) {
    char palabraInvertida[30];
    int j = 0;
    while (*pPalabra != '\0') {
        palabraInvertida[j] = pPalabra;
        j++;
        pPalabra++;
    }
    puts(palabraInvertida);
}

int main() {
    char palabra[30];
    puts("Ingrese una palabra para invertir");
    fflush(stdin);
    gets(palabra);

    invertirPalabra(&palabra);
    return 0;
}