/*
*@file ventana.c
*@brief Este archivo contiene funciones para dibujar ventanas
*@author Equipo03
*@date 28/nov/2021 
*/
#include"definiciones.h"
/*
*@brief Esta función dibuja una linea en pantalla
*@author Equipo03
*@date 28/nov/2021
*@param void
*@return void
*/
extern void dibujarLinea(void){
	printf("***************************************************************************\n");
	return;	
}
/*
*@brief Esta función dibuja el encabezado de una ventana
*@author Equipo03
*@date 28/nov/2021
*@param void
*@return void
*/
extern void encabezadoVentana(void){
			dibujarLinea();
			printf("|||||||||\\\\				|||||||| ||\n");
			printf("||	 ||			  	||	 ||\n");
			printf("||       //	||	//|||||\\  ||	||   	 ||  //||||\\    \\\\  //\n");
			printf("||||||||||      	||	   	||||||   ||  ||    ||    \\\\//\n");
			printf("||       \\\\	||	||	  ||    ||	 ||  |||||||/    //\\\\\n");
			printf("||	  ||	||	||        ||    ||       ||  ||		//  \\\\\n");
			printf("|||||||||//	||	\\\\|||||/  ||    ||       ||  \\\\|||||/  //    \\\\\n");
			dibujarLinea();
	return;	
}
/*
*@brief Esta función dibuja el pie de una ventana
*@author Equipo03
*@date 28/nov/2021
*@param void
*@return void
*/
extern void pieVentana(void){
			printf("\n\nPRESIONA ENTER PARA CONTINUAR...\n\n");
			dibujarLinea();
			printf("Desarrollado por Equipo 3: Amilcar, Fernanda, Manuel, Soad\n");
			dibujarLinea();
			getchar();
			getchar();
	return;	
}
