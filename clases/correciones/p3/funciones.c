/**
*@file funciones.c
*@brief contiene las funciones para manejar los dos arreglos: guardarlos en memoria, sumarlos, multiplicarlos y ordenar el primer arreglo.
*@author Equipo 3: Amilcar, Soad y Manuel
*@date: 26/10/2021
*/
#include "defArreglos.h"
/**
*@brief pregunta y guarda los datos dados introducidos por el usuario en un arreglo de tipo real
*@author Equipo 3: Amilcar, Soad y Manuel
*@date 26/10/2021
*@param Arr[], arreglo de tipo real para guardar y dar como salida los datos dados 
*@return void
*/
extern void CapturarNumeros(float Arr[]){
	int i;
		for(i=0;i<SIZE;i++){
			printf("Ingresa el valor del indice [%i]: ",i);
			scanf(" %f", &Arr[i]);
		}
	return;
}
/**
*@brief suma los datos contenidos en Arr1[] y Arr2[], para guardarlos en el Arr3[]
*@author Equipo 3: Amilcar, Soad y Manuel
*@date 26/10/2021
*@param Arr1[], arreglo de tipo real, arreglo a sumar a Arr2[]
*@param Arr2[], arreglo de tipo real, arreglo a sumar a Arr1[]
*@param Arr3[], arreglo de tipo real, donde se guardara la suma de arreglos
*@return void
*/
extern void SumarNumeros(float Arr1[], float Arr2[], float Arr3[]){
	int i;
		for(i=0;i<SIZE;i++){
			Arr3[i]=Arr1[i]+Arr2[i];
		}
	return;
}
/**
*@brief multiplica los datos contenidos en Arr1[] y Arr2[], para guardarlos en el Arr3[]
*@author Equipo 3: Amilcar, Soad y Manuel
*@date 26/10/2021
*@param Arr1[], arreglo de tipo real, arreglo a multiplicar por Arr2[]
*@param Arr2[], arreglo de tipo real, arreglo a multiplicar por Arr1[]
*@param Arr3[], arreglo de tipo real, donde se guardara la multiplicacion de arreglos
*@return void
*/
extern void MultiplicarNumeros(float Arr1[], float Arr2[], float Arr3[]){
	int i;
		for(i=0;i<SIZE;i++){
			Arr3[i]=Arr1[i]*Arr2[i];
		}
	return;
}
/**
*@brief ordena de menor a mayor los contenidos un arreglo de tipo real mediante un método burbuja
*@author Equipo 3: Amilcar, Soad y Manuel
*@date 26/10/2021
*@param Arr[], arreglo de tipo real, arreglo a ordenar de menor a mayor
*@return void
*/
extern void OrdenarNumeros(float Arr[]){
	int i,j;
	float temporal;
		for(i=0;i<SIZE;i++){
			for(j=(i+1);j<SIZE;j++){
				if(Arr[i]>Arr[j]){
					temporal=Arr[i];
					Arr[i]=Arr[j];
					Arr[j]=temporal;
				}
			}
		}
	return;
}
/**
*@brief imprime los elementos de un arreglo de tipo real
*@author Equipo 3: Amilcar, Soad y Manuel
*@date 26/10/2021
*@param Arr[], arreglo de tipo real, es el arreglo a imprimir
*@return void
*/
extern void ImprimirArreglo(float Arr[]){
	int i;
		for(i=0;i<SIZE;i++){
			printf("\nEl valor del indice [%i] es: %f", i, Arr[i]);
		}
		printf("\n");
	return;
}

