/*
*@file funciones.c
*@brief este archivo hay varias funciones para dibujar figuras
*@author clase de guillermo gomez
*@date 5/10/2021
*
*/
#include<stdio.h>

extern void dibujarCuadro(int Numero, char Simbolo){
	int i,j;
	for(i=1;i<=Numero;i++){
			for(j=1;j<=Numero;j++){
				printf("%c", Simbolo);
			}
	printf("\n");
	}
	printf("\n");
	return;
}

/**
*@brief esta funcion imprime un cuadrado sin relleno con las dimensiones y simbolo introducidos
*@author clase de guillermo gomez
*@date 5/10/2021
**/
extern void dibujarCuadroSinRelleno(int Numero, char Simbolo){
	int i,j;
		for(i=1;i<=Numero;i++){
			for(j=1;j<=Numero;j++){
				if (i==1 || i==Numero || j==1 || j==Numero){
					printf("%c",Simbolo);
				}
				else{
					printf(" ");
				}
			}
		printf("\n");
		}
		printf("\n");
	return;
}
