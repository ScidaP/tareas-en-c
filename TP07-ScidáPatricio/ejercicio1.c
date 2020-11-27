#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct medicamentos {
    char nombre[40];
    char presentacion[40];
    char laboratorio[40];
    int precio;
    int stock;
    int fecha_venc;
    char indicacion[40];
}inventario;

void contarInyectable(inventario *medicamentos, int *cant_inyectable) { /* Función para calcular la cantidad de medicamentos que son inyectables*/
    char tipo[20] = "Inyectable";
    char tipo1[20] = "inyectable";
    if(strcmp(medicamentos->presentacion, tipo) == 0 || strcmp(medicamentos->presentacion, tipo1) == 0){
        (*cant_inyectable)++;
    }
}

void modificarPrecio(inventario *medicamentos) {
    if (medicamentos->stock < 5) {
        medicamentos->precio *= 1.10; /* Le sumo el 10% */
    } else {
        medicamentos->precio *= 0.90; /* Le resto el 10% */
    }
}

void cargarDatos(inventario *medicamentos) {
    puts("Ingrese el nombre del medicamento.");
    fflush(stdin);
    gets(medicamentos->nombre);
    puts("Ingrese la presentacion. ('capsula, inyectable, gotas, etc') Sin acentos.");
    fflush(stdin);
    gets(medicamentos->presentacion);
    puts("Ingrese el laboratorio");
    fflush(stdin);
    gets(medicamentos->laboratorio);
    puts("Ingrese el precio.");
    scanf("%d", &medicamentos->precio);
    puts("Ingrese el stock");
    scanf("%d", &medicamentos->stock);
    puts("Ingrese la fecha de vencimiento, en formato YYYYMMDD");
    scanf("%d", &medicamentos->fecha_venc);
    fflush(stdin);
    puts("Ingrese la indicacion");
    gets(medicamentos->indicacion);
}


void mostrarDatos(inventario medicamentos) {
    puts("------------------------");
    printf("El nombre ingresado es: %s\n", medicamentos.nombre);
    printf("La presentación es: %s\n", medicamentos.presentacion);
    printf("El laboratorio es: %s\n", medicamentos.laboratorio);
    printf("El precio es: %d\n", medicamentos.precio);
    printf("El stock es de: %d\n", medicamentos.stock);
    printf("La fecha de vencimiento es: %d\n", medicamentos.fecha_venc);
    printf("La indicacion es: %s\n", medicamentos.indicacion);
}

int main() {
    inventario medicamentos[20];
    int cant, cant_inyectable = 0;
    puts("Ingrese de cuantos medicamentos necesita almacenar datos.");
    scanf("%d", &cant);
    for (int i=0; i<cant; i++){
        cargarDatos(&medicamentos[i]);
        modificarPrecio(&medicamentos[i]);
        contarInyectable(&medicamentos[i], &cant_inyectable);
    }
    for (int i=0; i < cant; i++) { /* Se mostrarán los datos de todos los medicamentos, después de haberlos ingresado.*/
        mostrarDatos(medicamentos[i]);
    }
    printf("En total, %d medicamentos son inyectables.", cant_inyectable);
    return 0;
}