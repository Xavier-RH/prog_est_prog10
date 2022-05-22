/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de una esfera y calcule su area y su volumen.
	*/

#include <stdio.h>
#include <math.h>

int main (){
	float area, volumen, radio;
	
	printf("Calcular el area de una esfera\n");
	printf("introduce el radio: ");
	scanf("%f",&radio);
	
	area=4*M_PI*pow(radio,2);
	volumen=(4*M_PI*pow(radio,3))/3;
	
	printf("\nEl area de la esfera es de %.2f cm2",area);
	printf("\nEl volumen de la esfera es de %.2f cm3",volumen);
	
	return 0;
}
