

/**
*@file ejemploSwitch.c
*@brief este programa muestra un menu de opciones para dibujar figuras en el cual llama a funciones.c y funciones3.c$
*@author clase de guillermo gomez
*@date 08/10/2021
**/
#include<stdio.h>
void dibujarCuadro(int Numero, char Simbolo);
void dibujarCuadroConNumero(int Numero);
void dibujarPiramide(int Numero);
void dibujarPiramideInvertida(int Numero);

int main(void){
        int lado;
        char opcion, patron;
                printf("\nIngresa la dimension de la figura: ");
                scanf(" %i", &lado);
                printf("\nM E N U\nCuadro con patron [A]\nCuadro con numeros [B] \nPiramide con numero [C]\nPiramide$
                scanf(" %c", &opcion);
//Estructura Switch
                        switch(opcion){
                                case 'a':
                                case 'A':
                                        printf("\nDame el patron: ");
                                        scanf(" %c", &patron);
                                        dibujarCuadro(lado, patron);
                                        break;
                                case 'b':
                                case 'B':
                                        dibujarCuadroConNumero(lado);
                                        break;
                                case 'c':
                                case 'C':
                                        dibujarPiramide(lado);
                                        break;
                                case 'd':
                                case 'D':
                                        dibujarPiramideInvertida(lado);
                                        break;
                                default:
                                printf("\nE R R O R, dato invalido\n");
                                break;
                        }


                }



