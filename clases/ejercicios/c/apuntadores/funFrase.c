/*
*@file funFrase.c 
*@brief en este archivo hay funciones que manejan la frase
*@author Clase de gullermo gomez
*@date 04/nov/2021
*/
#include"defFrase.h"
/* 
*@brief esta funcion nos indica cuantas vocales, mayusculas y si termina en punto una frase 
*@author Clase de gullermo gomez
*@date 04/nov/2021
*@param fr[], es string
*@param *voc es un apuntador de enteros vocales
*@param *may es un apuntador de enteros mayusculas
*@param *pun es un apuntador de enteros punto
*return void
*/
extern void contarEnFrase(char fr[],int *voc,int *may, int *pun){
	int i, numChars=strlen(fr);
		*voc=0;
		*may=0;
		for(i=0;i<numChars;i++){
			if((fr[i]=='a')||(fr[i]=='e')||(fr[i]=='i')||(fr[i]=='o')||(fr[i]=='u')){
				++*voc;
			}
                        if((fr[i]=='A')||(fr[i]=='E')||(fr[i]=='I')||(fr[i]=='O')||(fr[i]=='U')){
	                        ++*voc;
                        }
			if((fr[i]>='A')&&(fr[i]<='Z')){
				++*may;
			}

		} 
			if (fr[numChars-1]=='.'){
                                *pun=1;
                        }
                        else{
                                *pun=0;
                        }

	return;
}


