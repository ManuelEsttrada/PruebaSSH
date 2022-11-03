/**
*@file ejemplo.c
*@brief Este programa imprime los numeros impares del 1 al 7 
*@author clase de guillermo gomez
*@date 6/10/2021
**/
#include <stdio.h>

int main(void){
	int dato =0;
		while(dato<10){
			++dato;
			if(dato%2==0){
				continue;
			}
			printf("\nDato contiene: %i",dato);
			if(dato==7){
				break;
			}
		}
}
