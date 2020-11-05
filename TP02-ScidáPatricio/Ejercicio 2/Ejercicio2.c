#include <stdio.h>

int main() {
    int segundos, minutos, horas, segundosTotales, correcto;
	correcto = 0;
	
	while (correcto == 0) {
	printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &minutos);

    printf("Ingrese la cantidad de horas: ");
    scanf("%d", &horas);
    correcto = 1;
	if ((horas >=0 && horas<=23) && (minutos >=0 && minutos<=59) && (segundos>=0 && segundos <= 59)) {
        segundosTotales = horas * 3600;
        segundosTotales = segundosTotales + minutos*60;
        segundosTotales = segundosTotales + segundos;
        correcto = 1;
	} else {
		printf("Algún dato ingresado es incorrecto.\n");
		correcto = 0;
	}
	}
	
	printf("La cantidad de segundos es de: ");
	printf("%d", segundosTotales);
    

    return 0;
}
