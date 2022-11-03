/**
*@file manejaFrases.c
*@brief Este programa nos permite manipular cadenas. Son varios ejemplod easignaciones y uso de funciones
*1) Invertir una frase
*2) Cambiar las letras de una frase
*@author Clase de Guillermo gomez
*@date 22/10/2021
**/
#include<stdio.h>
#include<string.h>

void invertirFrase(char fr[], char inv[]);
void convertirMay(char fr[]);
int main(void){
        char frase[80], invertida[80];
        int numChars;

                printf("\nDame una frase: ");//sin salto de linea al final
                scanf(" %[^\n]", frase);
		numChars = strlen(frase);
                printf("\nTu frase tiene %i caracteres\n", numChars);
		printf("En tu texto en frase[6] esta el char: '%c'\n", frase[6]);
		invertirFrase(frase,invertida);
		printf("\nTu frase invertida es: %s\n", invertida);
		convertirMay(frase);
		printf("\nTu frase en mayusculas es: %s\n", frase);

        return 0;
}

void invertirFrase(char fr[], char inv[]){
	int i;
	int tam=strlen(fr);
		for(i=0;i<tam;i++){
			inv[i]= fr[tam-1-i];
		}
		inv[tam]= '\0';
	return;
}

void convertirMay(char fr[]){
	int i;
	int tam=strlen(fr);
		for(i=0;i<tam;i++){
			if((fr[i] >= 'a')&&(fr[i] <= 'z')){
				fr[i]=fr[i]-'a'+'A';
			}
		}
	return;
}
