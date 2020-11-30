#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

struct datosDni {
    char tipo; //Tipo A o B
    int numero;
};

typedef struct persona {
    char nombre[MAX];
    char apellido[MAX];
    struct datosDni dni;
    char domicilio[MAX];
    char tipo; // F para Fijo, C para celular
    long numeroTel;
} pers;

void agendarPersona(pers *pPersona, int cant) {
    for (int i = 0; i < cant; i++) {
        puts("Ingrese el nombre de la persona");
        fflush(stdin);
        gets(pPersona->nombre);
        puts("Ingrese el apellido de la persona");
        fflush(stdin);
        gets(pPersona->apellido);
        puts("Ingrese el tipo de DNI, A o B");
        scanf("%c", &pPersona->dni.tipo);
        puts("Ingrese el numero de DNI");
        scanf("%d", &pPersona->dni.numero);
        puts("Ingrese el domicilio");
        fflush(stdin);
        gets(pPersona->domicilio);
        puts("Ingrese el tipo de teléfono, F para Fijo o C para celular");
        scanf("%c", &pPersona->tipo);
        puts("Ingrese su numero de telefono");
        scanf("%lu", &pPersona->numeroTel);
        puts("------------------");
        pPersona++;
    }
}

void mostrarPersona(pers *pPersona, int cant) { // Solo para verificar que los datos carguen bien. No se la usa por ahora.
    for (int i = 0; i < cant; i++) {
        printf("-----------Mostrando datos de la persona %d-----------\n", i+1);
        printf("Nombre: %s\n", pPersona->nombre);
        printf("Apellido: %s\n", pPersona->apellido);
        printf("Tipo de DNI: %c\n", pPersona->dni.tipo);
        printf("Numero de DNI: %d\n", pPersona->dni.numero);
        printf("Domicilio: %s\n", pPersona->domicilio);
        printf("Tipo de telefono: %c\n", pPersona->tipo);
        printf("Numero de telefono: %lu\n", pPersona->numeroTel);
    }
}

void buscarporApellido(pers *pPersona, char ape) {
    for (int i=0;i < MAX; i++) {
        if (strcmp(pPersona->apellido, ape) == 0) {
            mostrarPersona(pPersona, 1);
        }
    }
}

void borrarUsuario(pers *pPersona, char *dni, int cant) {
    for (int i = 0; i < cant; i++) {
            if (strcmp(pPersona->dni.numero, dni) == 0) {
                (*pPersona->nombre) = ' ';
                (*pPersona->apellido) = ' ';            
        }
        pPersona++;
    }
}

int main() {
    pers personas[MAX];
    int cantPersonas;
    int buscarDni;
    // PRIMERA PARTE: AGENDAR USUARIOS
    puts("Ingrese cuantas personas quiere agendar.\n");
    scanf("%d", &cantPersonas);
    agendarPersona(personas, cantPersonas);
    // SEGUNDA PARTE: BORRAR USUARIOS
    puts("Ingrese el apellido de un usuario a eliminar");
    gets(buscarDni);
    borrarUsuario(personas, buscarDni, cantPersonas);
}