/*
*@file funciones.c
*@brief este archivo contiene funciones para dibujar las figuras de cuadrados con patron y con numero
*@author clase de guillermo gomez
*@date 08/10/2021
*/

/*
*@brief esta funcion imprime un cuadro nxn con el mismo numero de dimension dada
*@author clase de guillermo gomez
*@date 08/10/2021
*@param Numero, dato entero, es la dimension del cuadro
*@return void
*/
#include<stdio.h>

extern void dibujarCuadroConNumero(int Numero){
        printf("\n");
        int i,j;
                for(i=1;i<=Numero;i++){
                        for(j=1;j<=Numero;j++){
                                printf("%i", Numero);
                        }
                printf("\n");
                }
                printf("\n");
        return;
}

/*
*@brief esta funcion dibuja un cuadro nxn con un simbolo dado por el usuario
*@author clase de guillermo gomez
*@date 08/10/2021
*@param Numero, dato entero, es la dimension del cuadro
*@param Simbolo, dato de caracter, es el simbolo con el que se dibuja el cuadro
*/
extern void dibujarCuadro(int Numero, char Simbolo){
        int i,j;
        printf("\n");
        for(i=1;i<=Numero;i++){
                        for(j=1;j<=Numero;j++){
                                printf("%c", Simbolo);
                        }
        printf("\n");
        }
        printf("\n");
        return;
}

