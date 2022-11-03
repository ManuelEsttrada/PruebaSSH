/*
@file funciones2.c
*@brief En este archivo hay funciones adicionales a funciones.c para dibujar figuras
*@author clase de guillermo gomez
*@date 6/10/2021
*/
#include<stdio.h>
/*
*@brief  esta funcion dibuja un cuadrado de dimensiones nxn con el simbolo n
*@author clase de guillermo gomez
*@date 6/10/2021
*@param int n, es el valor de la dimension del cuadrado
*@return void
*/
extern void dibujarCuadroConNumero(int Numero){
	int i,j;
		for(i=1;i<=Numero;i++){
			for(j=1;j<=Numero;j++){
				printf("%i", Numero);
			}
		printf("\n");
		}
		printf("\n");
	return;
}
