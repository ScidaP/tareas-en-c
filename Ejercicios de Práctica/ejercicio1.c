#include <stdio.h>
#include <stdlib.h>
#include <string.h>

esTautograma(char *pFrase) {   
    char primerasLetras[20];
    primerasLetras[0] = pFrase[0];
    int tamanio = strlen(pFrase);

    for (int i = 0; i < tamanio; i++) {
        if (pFrase[i] != ' ') {
            pFrase++;
        } else {
            pFrase++;
            primerasLetras[i] = pFrase[i];
        }
    }
    for (int j = 0; j < strlen(primerasLetras); j++) {
        printf("%c", primerasLetras[j]);
    }
}   

int main() {
    char frase[100];
    gets(frase);
    char *pFrase = frase;
    esTautograma(pFrase);
}
