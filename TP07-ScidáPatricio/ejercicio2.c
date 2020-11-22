#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct reforestacion {
    char especie[MAX];
    char categoria[MAX];
    char nombre[MAX];
    char clima;
    int stock;
} ref;

void cargarArboles(ref *pArboles, int cant) {
    for (int i=0; i < cant; i++){
        printf("---Ingresando datos del arbol N: %d---\n", i+1);
        fflush(stdin);
        puts("Ingrese la especie del arbol");
        gets(pArboles->especie);
        fflush(stdin);
        puts("Ingrese la categoria del arbol");
        gets(pArboles->categoria);
        fflush(stdin);
        puts("Ingrese el nombre del arbol");
        gets(pArboles->nombre);
        fflush(stdin);
        puts("Ingrese el clima. (H para Humedo/S para Seco)");
        scanf("%c", &pArboles->clima);
        fflush(stdin);
        puts("Ingrese la cantidad");
        scanf("%d", &pArboles->stock);
        pArboles++;
    }
}

void mostrarUnArbol(ref *pArbol)
{
    printf("La especie del arbol es:");
    puts(pArbol->especie);

    printf("La categoria del arbol es:");
    puts(pArbol->categoria);

    printf("El nombre del arbol es:");
    puts(pArbol->nombre);

    printf("El clima es: %c \n", pArbol->clima);
    printf("El stock es: %d \n", pArbol->stock);
    puts("------------------------");
}

void mostrarTodosArboles(ref *pArboles, int cant)
{
    for (int i = 0; i < cant; i++)
    {
       mostrarUnArbol(pArboles);
       pArboles++;
    }
}

int main () {
    ref arboles[MAX];
    int cant;
    printf("Ingrese cuantos arboles quiere cargar\n");
    scanf("%d", &cant);
    cargarArboles(arboles, cant);
    mostrarTodosArboles(arboles, cant);
}