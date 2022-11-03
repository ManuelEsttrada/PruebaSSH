/**
*@file ejemploArreglo.c
*@brief este progrema crea un arreglo entero de 5 datos en donde se asignan valores y se muestran los elementos
*@author clase de guillermo gomez
*@date 12/10/2021
**/
#include<stdio.h>

int main(void){
	int numeros[5],i;
		numeros[0]=10;
		numeros[1]=23;
		numeros[2]=0;
			printf ("\nDame el numero[3] del arreglo: ");
			scanf("%i", &numeros[3]);
			numeros[4]= numeros[0]+numeros[1];
				for(i=0;i<5;i++){
					printf("\nEl valor del contenido en numeros[%i] es: %i", i, numeros[i]);
				}
		printf("\n");
		return 0;
                }
