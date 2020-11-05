#include <stdio.h>

int main() {
    int duerme, contador;
    contador = 0;

    printf("Ingrese cuantas horas desea dormir = ");
    scanf("%d", &duerme);

    while (duerme>contador) {
        printf("zZzzZzzZzzZ...");
        contador++;

    }
    printf("Es hora de levantarse!");
    
    return 0;
}