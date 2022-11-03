/*
*
*
*
*
*/

#include <stdio.h>
#define TAM 5
int main(void){
	int numeros[TAM];
	int i, mayor;
	float promedio;
		numeros[0]=10;
		numeros[1]=23;
		numeros[2]=0;
		printf("\nDame un numero: ");
		scanf("%i",&numeros[3]);
		numeros[4]=numeros[0]+numeros[1];
			for(i=0;i<TAM;i++){
			printf("\nEn numeros[%i] esta el valor %i",i,numeros[i]);
			}
		printf("\n");
		return 0;
}
