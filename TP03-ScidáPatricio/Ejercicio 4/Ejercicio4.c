#include <stdio.h>

int main() {
	anioBisiesto();
	return 0;
}

void anioBisiesto() {
   int anio;
   printf("Ingrese un año: ");
   scanf("%d", &anio);

   if (anio % 400 == 0) {
      printf("%d es un año bisiesto.", anio);
   }

   else if (anio % 100 == 0) {
      printf("%d no es un año bisiesto.", anio);
   }

   else if (anio % 4 == 0) {
      printf("%d es un año bisiesto.", anio);
   }

   else {
      printf("%d no es un año bisiesto.", anio);
   }
}
