#include <stdio.h>

int main() {
	char texto;
	int cantPalabras = 0, cant_a = 0, cant_e = 0, cant_i = 0, cant_o = 0, cant_u = 0, vocalesDistintas = 0;
	printf("Ingrese la frase terminada en un punto: ");
	scanf("%c", &texto);
	
	while (texto != '.') {
		if (texto != ' ') {
			printf("%c", texto);
			switch(texto) {
				case 'a': cant_a++;
				break;
				case 'e': cant_e++;
				break;
				case 'i': cant_i++;
				break;
				case 'o': cant_o++;
				break;
				case 'u': cant_u++;
				break;
			}
		} else {
			printf("*");
			if(texto == '.') {
        		if(cant_a>0){
                	vocalesDistintas++;
            	}
           		if(cant_e>0){
                	vocalesDistintas++;
            	}
            	if(cant_i>0){
                	vocalesDistintas++;
            	}
            	if(cant_o>0){
                	vocalesDistintas++;
            	}
            	if(cant_u>0){
                	vocalesDistintas++;
            	}

            if(vocalesDistintas>=3){
                cantPalabras++;
            }
            cant_a=0;
            cant_e=0;
            cant_i=0;
            cant_o=0;
            cant_u=0;
            vocalesDistintas=0; 
    		}	
		}
	}
	
	printf("La cantidad de palabras con más de tres vocales es de: %d", cantPalabras);
	return 0;
}
