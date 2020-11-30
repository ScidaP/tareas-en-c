#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

esTautograma(char *pFrase, char *pIniciales) {   
    int i, j = 0, k = 0, resultado;
    char charAnterior = ' ';
    while (pFrase[j] != '\0') {
        if (charAnterior == ' ' && isalpha(pFrase[j])) {
            pIniciales[k] = pFrase[j];
            k++;
        }
        charAnterior = pFrase[j];
        j++;
    }

    pIniciales[k] = '\0'; //Agrego la marca final
    puts(pIniciales);

    for (i=0; i < k-1; i++) {
        if (pIniciales[i] == pIniciales[i+1]) {
            resultado = 1;
        } else {
            resultado = 0;
            break;
        }
    }
    return resultado;
}   

int main() {
    char frase[MAX], iniciales[MAX], resultado;
    printf("Ingrese una frase para verificar si es tautograma\n");
    gets(frase);
    resultado = esTautograma(frase, iniciales);

    if (resultado == 1) {
        printf("La frase es un tautograma\n");
    } else {
        printf("La frase no es un tautograma\n");
    }
}
