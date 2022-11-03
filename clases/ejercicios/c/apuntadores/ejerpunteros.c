/*
*@file evaluaFrase.c
*@brief Este programa escanea una frase ingresada y devuelve el numero de vocales no acentuadas
	mayusculas y si la frase termina en punto, por medio del uso de apuntadores

	Un usuario ingresa una frase por teclado. Haga una funcion en lenguaje c
	que analice la frase y obtenga los siguientes resultados
	1)vocales no acentuadas 
	2)Mayusculas
	3)Si la frase termina con punto. Es 1 si termina o 0 si no lo hace
	Ejemplos:
	
	Hoy es jueves
	Vocales: 5
	Mayusculas: 1
	punto: 1
*@date 04/11/2021
*@author Clase de guillermo gomez
*/

#include"defFrase.h"

void contarEnFrase(char fr[],int *voc,int *may, int *pun);
int main(void){
	char frase[TAM];
	int vocales, mayusculas, punto;
		printf("\nIngresa la frase: ");
		scanf("%[^\n]", frase);
		contarEnFrase(frase, &vocales, &mayusculas, &punto);
		printf("\nTu frase tiene\n%i vocales\n%i mayúsculas\n", vocales, mayusculas);
		if(punto == 1){
			printf("tu frase termina en punto\n");
		}
		else{
			printf("tu frase no termina en punto\n");
		}
	return 0;
}



