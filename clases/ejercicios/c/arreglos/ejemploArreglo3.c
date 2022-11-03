/*
*@file ejemploArreglo2.c
*@brief este programa muestra el funcionamiento de los arreglos manipulando sus datos y promediandolos
*@author Clase de Guillermo Gomez
*@date 14/10/2021
*/
#include<stdio.h>
#define TAM 5 
float promediarArreglo(int arr[]);
int encontrarMayor(int arr[]);

int main(void){
	int numeros[TAM];
	int i,mayor;
	float promedio;
		numeros[0]=10;
		numeros[1]=23;
		numeros[2]=0;
			printf("\nDame un numero: ");
			scanf("%i",&numeros[3]);
			numeros[4]=numeros[0]+numeros[1];
				for(i=0;i<TAM;i++){
					printf("\nEn numeros[%i] esta el valor de %i", i, numeros[i]);
				}
				
				promedio= promediarArreglo(numeros);
				printf("\n\nEl promedio de los elementos del arreglo es: %f", promedio);
				
				mayor=encontrarMayor(numeros);
				printf("\n\nEl elemento mayor del arreglo es: %i", mayor);
			printf("\n");
	return 0;
}
/*
*@brief Esta funcion promedia los elementos del arreglo declarado
*@
*/
float promediarArreglo(int arr[]){
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
int encontrarMayor(int arr[]){
	int may,i;
		may = arr[0];
		for(i=1;i<TAM;i++){
			if(arr[i]>may){
				may=arr[i];
			}
		}
	return may;
}
