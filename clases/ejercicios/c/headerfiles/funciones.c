#include <stdio.h>
#define TAM 5
/*
*@brief Esta funcion promedia los elementos del arreglo declarado
*@
*/
extern float promediarArreglo(int arr[]){
	float resultado=0;
	int i;
		for(i=0;i<TAM;i++){
			resultado=resultado+arr[i];
		}	
		resultado=resultado/TAM;
	return resultado;
}

/*
*@brief esta funcion permite encontrar el numero mayor en un arreglo
*@author Clase de Guillermogomez
*@date 15/10/2021
*@param arr[], arreglo entero, sin unidades
*@return may, dato entero, es el valor mayor del arreglo 
*/
extern int encontrarMayor(int arr[]){
	int may,i;
		may = arr[0];
		for(i=1;i<TAM;i++){
			if(arr[i]>may){
				may=arr[i];
			}
		}
	return may;
}
