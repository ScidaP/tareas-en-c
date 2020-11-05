#include <stdio.h>
#include <stdlib.h>

void calcularCompra(int *cantArticulos, float *precioUnidad, float *precioArticulos, float *total, float *descuento, float *totalIva, int *tipo);

int main() {
	int *p_cantArticulos;
	float *p_precioUnidad, *p_precioArticulos;
	int tipo;
	float total=0, descuento=0, totalIva=0;
	
	do {
		puts("Ingrese la cantidad de tipos diferentes de calzado: ");
		scanf("%d", &tipo);
	} while (tipo < 3 || tipo > 5);
	
	//Crear los arreglos de forma dinámica
	
	p_cantArticulos = malloc(tipo*sizeof(int));
	p_precioUnidad = malloc(tipo*sizeof(float));
	p_precioArticulos = malloc(tipo*sizeof(float));
	
	for (int i = 0; i < tipo; i++) {
		printf("El calzado n°: %d\n", i);
		puts("Ingrese la cantidad del articulo");
		scanf("%f", &p_cantArticulos[i]);
		
		puts("Ingrese el precio del articulo");
		scanf("%f", &p_precioUnidad[i]);
	}
	
	calcularCompra(p_cantArticulos, p_precioUnidad, p_precioArticulos, &total, &descuento, &totalIva, tipo);
	
	//MOSTRAR SALIDA DE LA FUNCION CALCULARCOMPRA()
	puts("Precio total por producto\n");
	for (int j = 0; j < tipo; j++){
		printf("%f", p_precioArticulos[j]);
	}
	printf("Valor total sin descuento: %f\n", total);
	printf("Valor del descuento: %f\n", descuento);
	printf("Valor del descuento + iva: %f\n", totalIva);
	
	//LIBERAR MEMORIA
	
	free(p_cantArticulos);
	free(p_precioUnidad);
	free(p_precioArticulos);
	
	return 0;
}

void calcularCompra(int *cantArticulos, float *precioUnidad, float *precioArticulos, float *total, float *descuento, float *totalIva, int *tipo){ 
	for(int i= 0; i < tipo; i++) {
		precioArticulos[i] = cantArticulos[i]*precioUnidad[i];
		*total = *total + precioArticulos[i];
	}
	*descuento = *total *0.15;
	*totalIva = (*total - *descuento)*1.21;
	
}
