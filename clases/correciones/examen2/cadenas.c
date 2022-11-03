/**
*@file cadenas.c
*@brief este programa lee dos frases, en la primera muestra el numero de carácteres no alfabéticos pero imprimibles e indica si una frase es espejo cuando contiene 24 carácteres
		en la segunda escanea una cadena de 7 caracteres correspondiaente a una suma o multiplicación y devuelve el resultado
*@author Manuel Estrada
*@date 09/nov/2021
**/
#include<stdio.h>
#include<string.h>
#define TAM1 25
#define TAM2 8
//prototipos de función
void mostrarInstrucciones(void);
void capturarFrase(char fr[]);
int analizarFrase(char fr[],int *puntCaracteres);
int calcularOperacion(char fr[]);
//main
int main(void){
	char frase1[TAM1], frase2[TAM2];
	int numCaracteres, esEspejo=0;
	mostrarInstrucciones();
	//PARTE I
	printf("\n---PARTE 1---");
	capturarFrase(frase1);
	esEspejo=analizarFrase(frase1,&numCaracteres);
	printf("\El número de carácteres no alfabéticos pero imprimibles es: %i",numCaracteres);
	if(esEspejo){
		printf("\nLa frase introducida NO es una frase espejo");
	}
	else{
		printf("\nLa frase introducida es una frase espejo");
	}
	//PARTE II	
	printf("\n---PARTE 1---");
	capturarFrase(frase2);
	printf("El resultado de la linea de operación es: %i\n",calcularOperacion(frase2));
	

	return 0;
}
/**
*@brief esta funcion muestra las Instrucciones del programa
*@author Manuel Estrada
*@date 09/nov/2021
*@param void
*@return void
**/
void mostrarInstrucciones(void){
	printf("\nEste programa lee dos frases, en la primera muestra el numero de carácteres no alfabéticos pero imprimibles e indica si una frase es espejo cuando contiene 24 carácteres, en la segunda escanea una cadena de 7 caracteres correspondiaente a una suma o multiplicación y devuelve el resultado\n ");
	return;
}
/**
*@brief esta funcion captura y guarda un string
*@author Manuel Estrada
*@date 09/nov/2021
*@param void
*@return void
**/
void capturarFrase(char fr[]){
		printf("\nInserte la frase a anlizar: ");
		scanf(" %[^\n]", fr);
	return;
}
/**
*@brief esta funcion analiza la frase y devolviendo los caracteres no alfabéticos pero imprimibles y si la frase es espejo o no
*@author Manuel Estrada
*@date 09/nov/2021
*@param fr[], es un string, la frasea analizar
*@param *punCaracteres, es un entero, numero de carácteres
*@return espejo, entero, 1 si es espejo, 0 si no
**/
int analizarFrase(char fr[],int *puntCaracteres){
	int i, espejo, verificador=0;
	int num = strlen(fr);
		//número de chars
		*puntCaracteres=0;
		if(num<=24){
				for(i=0; i<num; i++)
				{
					if(((fr[i]>='!')&&(fr[i]<='/'))){
						*puntCaracteres=*puntCaracteres+1;
					}
				}
		}
		else{
			printf("La frase introducida excede el tamaño requerido");
		}
		//Verificar si es espejo
		if(num==24){
		for(i=0; i<=12;i++){
			if(fr[i]==fr[TAM1-i]){
				verificador=verificador+1;
			}	
			if(verificador==12){
				espejo=1;	
			}
			else{
				espejo=0;
			}
	    }
		}
	return espejo;
}
/**
*@brief esta funcion calcula una linea de operacion de suma o multiplicación de un string de 7 carácteres 
*@author Manuel Estrada
*@date 09/nov/2021
*@param fr[], es un string, la frasea analizar
*@return resultado, entero, es el resultado de la operación
**/
int calcularOperacion(char fr[]){
	int resultado=0, i, num=0, numero1,numero2;
	int centenas=0, decenas=0, unidades=0;
	int largo = strlen(fr);
	if(largo<=7){
		for(i=0; i<=TAM2;i++){
			switch(fr[i]){
					case '1':
						num = 1;
						break;
					case '2':
						num = 2;
						break;
					case '3':
						num = 3;
						break;
					case '4':
						num = 4;
						break;
					case '5':
						num = 5;
						break;
					case '6':
						num = 6;
						break;
					case '7':
						num = 7;
						break;
					case '8':
						num = 8;
						break;
					case '9':
						num = 9;
						break;
					case '0':
						num = 0;
						break;
					default:
						break;
			}
			if((i==0)||(i==4)){
				centenas=num*100;
			}
			if((i==1)||(i==5)){
				decenas=num*10;
			}
			if((i==2)||(i==6)){
				unidades=num;
			}
			if(i==3){
			numero1=centenas+decenas+unidades;
			}
			if(i==6){
			numero2=centenas+decenas+unidades;
			}
		
		}
		if(fr[3]=='*'){
			resultado=numero1*numero2;		
		}
		if(fr[3]=='+'){
			resultado=numero1+numero2;	
		}
	}
	else{
		printf("\nLa cadena excede el tamaño permitido\n");
	}
	return resultado;
}
