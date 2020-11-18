#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct medicamentos {
    char nombre[40];
    char presentacion[40];
    char laboratorio[40];
    int precio;
    int stock;
    int fecha_venc;
    char indicacion[40];
};

void modificarPrecio(struct medicamentos *medicamento1) {
    if (medicamento1->stock < 5) {
        medicamento1->precio *= 1.10; /* Le sumo el 10% */
    } else {
        medicamento1->precio *= 0.90; /* Le resto el 10% */
    }
}

void cargarDatos(struct medicamentos *medicamento1) {
    puts("Ingrese el nombre del medicamento.");
    fflush(stdin);
    gets(medicamento1->nombre);
    puts("Ingrese la presentacion. ('Capsula, inyectable, gotas, etc')");
    fflush(stdin);
    gets(medicamento1->presentacion);
    puts("Ingrese el laboratorio");
    fflush(stdin);
    gets(medicamento1->laboratorio);
    puts("Ingrese el precio.");
    scanf("%d", &medicamento1->precio);
    puts("Ingrese el stock");
    scanf("%d", &medicamento1->stock);
    puts("Ingrese la fecha de vencimiento, en formato YYYYMMDD");
    scanf("%d", &medicamento1->fecha_venc);
    fflush(stdin);
    puts("Ingrese la indicacion");
    gets(medicamento1->indicacion);
}


void mostrarDatos(struct medicamentos medicamento1) {
    printf("El nombre ingresado es: %s\n", medicamento1.nombre);
    printf("La presentación es: %s\n", medicamento1.presentacion);
    printf("El laboratorio es: %s\n", medicamento1.laboratorio);
    printf("El precio es: %d\n", medicamento1.precio);
    printf("El stock es de: %d\n", medicamento1.stock);
    printf("La fecha de vencimiento es: %d\n", medicamento1.fecha_venc);
    printf("La indicacion es: %s\n", medicamento1.indicacion);
}

int main() {
    struct medicamentos medicamento1[20];
    int cant;
    puts("Ingrese de cuantos medicamentos necesita almacenar datos.");
    scanf("%d", &cant);
    for (int i=0; i<cant; i++){
        cargarDatos(&medicamento1[i]);
        modificarPrecio(&medicamento1[i]);
        mostrarDatos(medicamento1[i]);
    }
    return 0;
}