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

void mostrarPersona(pers *pPersona) { // Solo para verificar que los datos carguen bien. No se la usa por ahora.
    printf("-----------Mostrando datos de la persona %s %s-----------\n", pPersona->nombre, pPersona->apellido);
    printf("Nombre: %s\n", pPersona->nombre);
    printf("Apellido: %s\n", pPersona->apellido);
    printf("Tipo de DNI: %c\n", pPersona->dni.tipo);
    printf("Numero de DNI: %d\n", pPersona->dni.numero);
    printf("Domicilio: %s\n", pPersona->domicilio);
    printf("Tipo de telefono: %c\n", pPersona->tipo);
    printf("Numero de telefono: %lu\n", pPersona->numeroTel);
}

void buscarPorApellido(pers *pPersona, int cant) {
    char elegir;
    puts("Desea buscar una persona por apellido? S/N");
    fflush(stdin);
    scanf("%c", &elegir);
    if (elegir == 'S') {
        char ape[MAX];
        puts("Ingrese el apellido que desea buscar.");
        fflush(stdin);
        gets(ape);
        for (int i=0;i < cant; i++) {
            if (strcmp(pPersona->apellido, ape) == 0) {
            mostrarPersona(pPersona);
            }
        pPersona++;
        }
    } else {
        int j;
        for (j = 0; j < cant; j++) {
            mostrarPersona(&pPersona[j]);
        }
    }
}

void borrarUsuario(pers *pPersona, pers *pActualizado, int cant) {
    char elegir;
    puts("Desea borrar algun usuario? S/N");
    fflush(stdin);
    scanf("%c", &elegir);
    if (elegir == 'S') {
        int i = 0, j = 0, buscarDni;
        puts("Ingrese el dni de un usuario a eliminar");
        scanf("%d", &buscarDni);
        for (i; i < cant; i++) {
            if (pPersona->dni.numero != buscarDni) {
                pActualizado[j] = *pPersona;
                j++;
            }
        pPersona++;     
        } 
        puts("------------USUARIO BORRADO------------");
        puts("---------------------------------------");
        for (int k = 0; k < cant-1; k++) {
            puts("Mostrando todos los usuarios registrados");
            mostrarPersona(&pActualizado[k]);
        }
    } else {
            for (int k = 0; k < cant; k++) {
                puts("---Mostrando todos los usuarios registrados---");
                mostrarPersona(&pPersona[k]);
        };
    }
}

int main() {
    pers personas[MAX], personasActualizada[MAX];
    int cantPersonas;
    // PRIMERA PARTE: AGENDAR USUARIOS
    puts("Ingrese cuantas personas quiere agendar.\n");
    scanf("%d", &cantPersonas);
    agendarPersona(personas, cantPersonas);
    // SEGUNDA PARTE: BUSCAR PERSONA POR APELLIDO
    buscarPorApellido(personas, cantPersonas);
    // TERCERA PARTE: BORRAR USUARIO
    borrarUsuario(personas, personasActualizada, cantPersonas);
    // CUARTA PARTE: LISTAR PERSONAS AGENDADAS
}