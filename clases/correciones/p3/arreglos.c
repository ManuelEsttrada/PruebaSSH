/**
*@file arreglos.c
*@brief realiza una serie de operaciones (suma y multiplicacion) con dos arreglos introducidos por el usuario reordena los elementos del primer arreglo de menor a mayor y los muestra
*@author Equipo 3: Amilcar, Soad y Manuel
*@date: 26/10/2021
**/
#include "defArreglos.h"

void ImprimirInstrucciones(void);
void CapturarNumeros(float Arr[]);
void SumarNumeros(float Arr1[], float Arr2[], float Arr3[]);
void MultiplicarNumeros(float Arr1[], float Arr2[], float Arr3[]);
void OrdenarNumeros(float Arr[]);
void ImprimirArreglo(float Arr[]);

int main(void){
	float Arreglo1[SIZE];
	float Arreglo2[SIZE];
	float Arreglo3[SIZE];
		ImprimirInstrucciones();
		printf("\n--ARREGLO 1--\n");
		CapturarNumeros(Arreglo1);
		printf("\n--ARREGLO 2--\n");
		CapturarNumeros(Arreglo2);
		printf("\n--SUMA--");
		SumarNumeros(Arreglo1, Arreglo2, Arreglo3);
		ImprimirArreglo(Arreglo3);
		printf("\n--MULTIPLICACIÓN--");
		MultiplicarNumeros(Arreglo1, Arreglo2, Arreglo3);
		ImprimirArreglo(Arreglo3);
		printf("\n--ARREGLO 1 ORDENADO--");
		OrdenarNumeros(Arreglo1);
		ImprimirArreglo(Arreglo1);
		printf("\n");
	return 0;
}
/**
*@brief imprime las instrucciones principales en pantalla
*@author Equipo 3: Amilcar, Soad y Manuel
*@date: 26/10/2021
*@param void
*@return void
*/
void ImprimirInstrucciones(void){
		printf("\nEste programa guarda 10 valores que introduzcas en dos arreglos de datos reales de 5 elementos cada uno, según corresponda, posteriormente suma y multiplica los elementos ubicados en la misma posición, guardándolo en un tercer arreglo y mostrándolo, finalmente devuelve en orden ascendente los elementos del primer arreglo.\n");
	return;
} 

