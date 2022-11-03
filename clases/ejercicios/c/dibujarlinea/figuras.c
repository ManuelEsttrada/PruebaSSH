/*
*@file linea.c
*@brief este programa dibuja una linea de cierta cantidad de simbolos determinados por el usuario
*@author clase de guillermo gomez
*@date 5/10/2021
*
*Se va a modificar el programa para utiliza una funcion externa
*/

#include<stdio.h>

void dibujarLinea(int Numero, char Simbolo);
void dibujarCuadro(int Numero, char Simbolo);
void dibujarCuadroSinRelleno(int Numero,char Simbolo);
void dibujarCuadroConNumero(int Numero);
int main(void){
	int i, Numero;
	char Simbolo;	
	printf("\nIngresa el simbolo y el largo de la linea y el cuadrado a dibujar: ");
	scanf(" %i %c",&Numero,&Simbolo);
	printf("Este es la linea\n");
	dibujarLinea(Numero, Simbolo); 
	printf("Este es un cuadrado\n");
	dibujarCuadro(Numero, Simbolo);
	printf("Este es un cuadro sin relleno\n");
	dibujarCuadroSinRelleno(Numero, Simbolo);
	printf("Este es un cuadrado nxn dibujado con el numero de su dimension\n");
	dibujarCuadroConNumero(Numero);
	return 0; 
}
/*
*@brief esta funcion imprime un número de caracteres en pantalla, en forma de linea
*@author clase de guillermo gomez
*@date 5/10/2021
*@param Numero, dato entero, es el largo de la linea
*@param Simbolo, dato entero, es el caracter del que se conforma la linea
*@return void 
*/
void dibujarLinea(int Numero, char Simbolo){
	int i;
		for(i=1;i<=Numero;i++){
			printf("%c", Simbolo);
		}
		printf("\n");
	return;
}
