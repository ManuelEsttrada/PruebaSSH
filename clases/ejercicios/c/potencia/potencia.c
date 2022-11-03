 /*
*@brief Esta programa calcula la potencia de un numero x a la y
*@author Clase de Guillermo Gomez
@date 20/sep/2021
*/

#include<stdio.h>

long double CalcularPotencia(float x, int y);
int main(void){
	int y;
	long double x, resultado=0;
 		printf("\n Este programa calcula un valor x elevado a un valor y, ingresa los valores separados: ");
		scanf("%Lf %i", &x, &y);
		resultado= CalcularPotencia(x,y);
		printf("El resultado de la potencia es x elevado a la y es: %Lf\n", resultado);
return 0;

}
/*
*@brief Esta funcion calcula la potencia de un numero x a la y
*@author Clase de Guillermo Gomez
@date 20/sep/2021
*@param x es real
*@param y es la potencia entera
*@return potencia que es real
*/

long double CalcularPotencia(float x, int y){
int i;
long double potencia=1;
	for(i=1;i<=y;i++){
		potencia=potencia*x;
}
return potencia;
}






