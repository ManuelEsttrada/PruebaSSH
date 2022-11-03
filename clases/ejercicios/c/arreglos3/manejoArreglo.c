/**
*@file manejoArreglo.c
*@brief Este es un ejemplo de varias funciones para manipular arreglos
*1)	Haga una funcion que permita recibir como argumrnto un arreglo de
*	cuatro valores enteros, en la función permita que el usuario capture los
*	valores
*2)	Haga una funcion que reciba como argumento el arreglo de entros y mande a imprimir
*	los datos capturados
*@author Manuel Estrada Maldonado
*@date 21/10/2021
*/

#include <stdio.h>
#define SIZE 4

void capturarDatos(int dat[]);
void imprimirDatos(int dat[]);

int main(void){
	int enteros[SIZE];
		capturarDatos(enteros);
		imprimirDatos(enteros);
	return 0;
}
/*
*@brief Esta funcion captura los datos dentro de un arreglo determinado
*@author Manuel Estrada Maldonado
*@date 21/10/2021
*@param dat[], dato entero, es el arreglo en el que se capturan los datos
*@return void
*/
void capturarDatos(int dat[]){	
	int i;
	printf("\nIgresa los datos del arreglo:\n");
		for(i=0; i<SIZE;i++){
			printf("\nDame el dato %i: ",i);
			scanf(" %i", &dat[i]);
		}
	return;
}

void imprimirDatos(int dat[]){  
        int i;
        printf("\nLos datos capturados son:\n");
                for(i=0; i<SIZE;i++){
                        printf("\nEn numeros[%i]: %i \n",i,dat[i]);
                }
	printf("\n");
        return;
}

