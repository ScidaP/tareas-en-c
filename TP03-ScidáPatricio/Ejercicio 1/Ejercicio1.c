#include <stdio.h>
#include <math.h>

int main (){
	numeroInverso();
	return 0;
}

void numeroInverso() {
  int numero, inverso = 0;

  printf("Escriba un numero de 4 digitos.\n");
  scanf("%d", &numero);

  while (numero != 0) {
    inverso = inverso * 10;
    inverso = inverso + numero%10;
    numero = numero/10;
  }

  printf("El inverso del n�mero es: %d\n", inverso);

}
