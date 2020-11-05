#include <stdio.h>

int main() {
	esPerfecto();
	return 0;
}

void esPerfecto() {
		int n, i, suma, max = 100;
	printf("Los numeros perfectos entre 1 y 100 son: \n");
	for (n = 1; n <= (max - 1); n++){
		i = 1;
		suma = 0;
		while (i < n) {
			if (n % i == 0)
				suma = suma + i;
				i++;
		}
		if (suma == n) 
			printf("%d\n", n);
	}
}
