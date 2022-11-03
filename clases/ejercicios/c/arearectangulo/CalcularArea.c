/**
*@brief Este programa calcula el area de un rectangulo
*@date 24/sep/2021
*@author Clase de Guillermo Gomez
*
*
*/

#include <stdio.h>
float calcularArea(float base, float altura);

int main(void){
	float base, altura, resultado;
		printf("\nEste programa calcula el area de un rectangulo\nIngresa el valor de la base y la altura en centimetros: ");
		scanf("%f%f",&base,&altura );
		resultado=calcularArea(base, altura);
		printf("\nEl area del rectangulo es: %.2f cm2\n", resultado);
	return 0;

}

/*
*@brief Esta funcion recibe base y altura y calcula el area de la superficie
*@author Clase de Guillermo Gomez
*@date 24/sep/2021
*@param base es float, es la base del rectangulo
*@param altura es un float, es la altura del re4ctangulo
*@return area es float, es el area del rectangulo
*/

float calcularArea(float base, float altura){
	float area;
	area=base*altura;
	return area;
}
