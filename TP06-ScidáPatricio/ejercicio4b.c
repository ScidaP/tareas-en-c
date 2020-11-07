#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertar(char *cad, int pos, char c, int tam);

int main() {
    char *p_cadena, aInsertar;
    int tam, pos;
    printf("Ingrese la cantidad de caracteres que usara en la cadena\n");
    scanf("%d", &tam);

    //Creo el arreglo de forma dinámica

    p_cadena = malloc(tam*sizeof(char));

    printf("Ingrese la cadena\n");
    fflush(stdin);
    gets(p_cadena);

    //El usuario ingresa que caracter y donde ponerlo

    printf("Escriba el caracter a insertar\n");
    fflush(stdin);
    scanf("%c", &aInsertar);
    printf("Escriba la posicion en la que desea que se inserte\n");
    fflush(stdin);
    scanf("%d", &pos);
    insertar(p_cadena, pos, aInsertar, tam);
}

void insertar(char *cad, int pos, char c, int tam) {
    int i;
    if (pos > tam+1 || pos <= 0) {
        printf("Posicion ingresada invalida. Porfavor ingrese un valor entre 0 y %d", tam);
    } else {
        //Creo espacio para el nuevo caracter
        for (i = tam; i >= pos; i--) {
            cad[i] = cad[i-1];
        }

        cad[pos-1] = c;
        tam++;

        printf("Cadena despues de la insercion:");
        for (i = 0; i < tam; i++) {
            printf("%c", cad[i]);
        }
    }
}
