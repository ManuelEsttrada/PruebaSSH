/**
*@brief lee secuencialmente las palabras de un archivo 
	avanza la lectura con la palabra avanza y termina con cualquier palabra o cuando acabe el archivo
**/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	char palabra[50] , opcion='a';
		fp=fopen("palabras.txt","r");
		if(fp == NULL){
			printf("Archivo no disponible");
			exit(1);
		}
		while((opcion == 'a') && (fscanf(fp,"%s", palabra)==1)){
			printf("\nlei del archivo: %s\nquieres seguir?: ", palabra);
			scanf(" %c", &opcion);
		}
		fclose(fp);
	return 0;
}

