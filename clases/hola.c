/*

@file hola.c
@brief Este es un ejemplo para entender el lenguaje C
		es para imprimir un mensaje en pantalla
@author Clase de Guillermo Gómez
@date 21/sep/2021
*/

//declaraciones y definiciones
#include <stdio.h>//declaracion de blibliotecas entrada y salida 
int main(void)// eswte es el programa principal
{//agrupadores de sentencias y expresiones
int dato; //parte de ddefinicion de variables 

	printf("\nhola mundo:)");//Una sentencia que ejecuta la funcion imprimir en pantalla
	dato = 125 + 37;
	printf ("\nla suma de 135 + 37 es: %i\n\n",dato); 
	return 0;// fin del programa principal
}// fin de agrupador de sentencias y expresiones

