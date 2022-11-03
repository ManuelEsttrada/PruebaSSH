/**
*@file ValidarSiEsPrimo.c
*@brief Este programa determina si un numero es primo o no lo es 
*@author Clase Guillermo Gomez
*@date 30/sep/2021
*/
#include<stdio.h>

void ImprimirInstrucciones();
int ValidarPrimo(int Numero);
void MostrarResultado(int resultado);

int main(void){
	int Numero;
	int resultado;
			do{
				ImprimirInstrucciones();
				scanf(" %i", &Numero);
				if(Numero>0){
					resultado=ValidarPrimo(Numero);
					MostrarResultado(resultado);
				}
				else{
					printf("E R R O R, el numero ingresado no es un dato valido para evaluar");
				}
			}while(Numero<0);	
	return 0;
}
/**
*@brief Este procedimiento imprime en pantalla las instruciones del problema
*@author Clase Guillermo Gomez
*@date 30/sep/2021
*/
void ImprimirInstrucciones(){
	printf("\nEste programa valida si un numero es primo o no lo es\nIngresa un numero para comenzar: ");
}
/**
*@brief Esta función realiza el calculo de la serie a partir del Valor ingresado por el usuario
*@author Clase Guillermo Gomez
*@date 30/sep/2021
*@param valorDenominador, dato entero, sin unidades
*@return resultado, dato real, sin unidades 
*/
int ValidarPrimo(int Numero){
int i;
int primo=1;
	for(i=2;i<=Numero-1;i++){
		if((Numero%i)==0){
			primo=0;
			return primo;
		}
	}
	return primo;
}
/**
*@brief El procedimiento MostrarResultado imprime en pantalla un breve mensaje junto el resultado de la Sumatoria
*@author Clase Guillermo Gomez
*@date 30/sep/2021
*@param Sumatoria, dato real, sin unidades 
*/
void MostrarResultado(int resultado){
	if(resultado==1){
		printf("El numero es Primo\n");
	}
	else{
		printf("El numero NO es primo\n");
	}
}
