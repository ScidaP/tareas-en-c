#include <stdio.h>
#include <string.h>
 
int main(){
	int i = 0;
	char arreglo[200];
	int n;
	
	for (n = 0; n < 200; n++) {
		while (i < 200) {
			if (i % 6 == 0) {
				arreglo[n] = i;
				printf("%d", arreglo[n]);
				printf("  ");
			}
			i++;
		}
	}	
	return 0;
}
