/*
*@file funciones3.c
*@brief Este archivo contiene unciones para dibujar piramides con numeros e invertidas
*@author clase de guillermo gomez
*date 08/10/2021
*/

/*
*@brief esta función dibuja una piramide de numeros con las filas ingresadas por el usuario
*@author clase de guillermo gomez
*@date 08/10/2021
*@param Numero, dato entero, es el numero de filas de la piramide
*@return void
*/
#include<stdio.h>

extern void dibujarPiramide(int Numero){
        int i,j;
        printf("\n");
                for(i=1;i<=Numero;i++){
                        for(j=1;j<=i;j++){
                                printf("%i", i);
                        }
                printf("\n");
                }
                printf("\n");
        return;
}
/*
*@brief Esta funcion dibuja una piramide invertida del numero de filas ingresadas por el usurio
*@author clase de guillermo gomez
*@date 08/10/2021
*@param Numero, dato entero, es el numero de filas de la piramide
*@return void
*/
extern void dibujarPiramideInvertida(int Numero){
        int i,j,k;
                printf("\n");
                for(i=Numero;i>=1;i--){
                        for(j=Numero;j>=i;j--){
                                printf(" ");
                        }
                        for(k=1;k<=(i*2)-1;k++){
                                        printf("*");
                        }

                printf("\n");
                }
                printf("\n");
        return;
}


