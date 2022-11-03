/**
*@brief lee secuencialmente las letras de un archivo 
	avanza la lectura con la letra a y termina cpon cualquier letra o cuando acabe el archivo
**/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	char letra , opcion='a';
		fp=fopen("letras.txt","r");
		if(fp == NULL){
			printf("Archivo no disponible");
			exit(1);
		}
		while((opcion == 'a') && (fscanf(fp,"%c", &letra)==1)){
			printf("\nlei del archivo: %c\nquieres seguir?: ", letra);
			scanf(" %c", &opcion);
		}
		fclose(fp);
	return 0;
}

