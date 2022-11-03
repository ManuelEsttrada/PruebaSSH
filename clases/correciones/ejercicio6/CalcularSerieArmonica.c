/**
*@file CalcularSerieArmonica.c
*@brief Este programa determina la sumatoria de una serie armonica hasta n termino ingresado por el usuario
*@author Clase Guillermo Gomez, Equipo 3
*@date 05/oct/2021
*/
#include<stdio.h>

void ImprimirInstrucciones(void);
float CalcularSerie(int valorDenominador);
void MostrarResultado(float Sumatoria);

int main(void){
        int valorDenominador;
        float Sumatoria=0;
                        ImprimirInstrucciones();
                        scanf(" %d", &valorDenominador);
                        Sumatoria=CalcularSerie(valorDenominador);
                        MostrarResultado(Sumatoria);
        return 0;
}
/**
*@brief Esta función imprime en pantalla las instrucciones del problema
*@author Clase Guillermo Gomez, Equipo 3
*@date 05/oct/2021
*@param void
*@return void
*/
void ImprimirInstrucciones(void){
                printf("\nEste programa realiza la suma de una serie de forma s = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/d \nIngresa un número entero positivo (d) para comenzar: ");
        return;
}
/**
*@brief Esta función realiza el calculo de la serie a partir del Valor ingresado por el usuario
*@author Clase Guillermo Gomez, Equipo 3
*@date 05/oct/2021
*@param valorDenominador, dato entero, sin unidades
*@return resultado, dato real, sin unidades
*/
float CalcularSerie(int valorDenominador){
        float resultado=0,i;
                for(i=1;i<=valorDenominador;i++)
                {
                        resultado=resultado+(1/i);
                }
                return resultado;
}
/**
*@brief Esta función MostrarResultado imprime en pantalla un breve mensaje junto el resultado de la Sumatoria
*@author Clase Guillermo Gomez, Equipo 3
*@date 05/oct/2021
*@param Sumatoria, dato real, sin unidades
*@return void
*/
void MostrarResultado(float Sumatoria){
                printf("\nEl resultado de la sumatoria es: %f \n", Sumatoria);
        return;
}

