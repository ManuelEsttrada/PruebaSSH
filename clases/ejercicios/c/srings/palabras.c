/**
*@file palabras.c
*@brief Este programa nos permite manipular cadenas. Son varios ejemplod easignaciones y uso de funciones
*@author Clase de Guillermo gomez
*@date 22/10/2021
**/
#include<stdio.h>
#include<string.h>

int main(void){
	char nombre[40];
	char letra;
	
		printf("\nDame una letra: ");//sin salto de linea al final
		scanf(" %c", &letra);//espacio antes del conversor
		printf("la letra es: %c", letra);
		printf("\nDame tu nombre (solo se puede leer una palabra): ");
		scanf(" %s", nombre);//lee una cadena sin espacios
		printf("\nTu nombre es: %s", nombre);
		printf("\nDame tu nombre completo: ");
		scanf(" %[^\n]", nombre);
		printf("\nTu nombre completo es: %s\n", nombre);

	return 0;
}
