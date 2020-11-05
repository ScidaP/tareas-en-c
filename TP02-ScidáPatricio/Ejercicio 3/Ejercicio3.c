#include <stdio.h>

int main() {
	char medio, padres;
	int subsidio, distancia, hijosEnEscuela;
	
	printf("En qu� medio va a la escuela? Use \"O\" para Omnibus, \"T\" para Transporte p�blico o \"P\" si va a pie. ");
	scanf("%c", &medio);
	
	if (medio == 'O') {
		subsidio = 1000;
	} else if (medio == 'T') {
		subsidio = 500;
	} else if (medio == 'P') {
		printf("A qu� distancia de la escuela vive, en km? R: ");
		scanf("%d", &distancia);
		if (distancia > 3) {
			printf("Tus padres est�n desocupados? \"S\" para Si o \"N\" para No.");
			fflush(stdin);
			scanf("%c", &padres);
			if (padres == 'N') {
				printf("Cu�ntas personas en tu familia est�n en edad escolar?");
				scanf("%d", &hijosEnEscuela);
				if (hijosEnEscuela > 3) {
					subsidio = 3000;
				}
			} else if (padres == 'S') {
				printf("Usted recibi� el plan ESTUDIAR, de $5000\n");
				subsidio = 5000;
			}
		} else {
			subsidio = 0;
		}
	}
	printf("Correspondiendo con los datos ingresados, usted recibe un subsidio de $%d", subsidio);
	return 0;
	
}
