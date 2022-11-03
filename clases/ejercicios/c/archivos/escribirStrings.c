/**
*@brief El prgrama escribe palabras  en un archivo hasta que se ingrese 's'
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	FILE *fp;
	char palabra[50];
	
		fp=fopen("palabras.txt","a");//Se abre el archivo para anexar
		if(fp==NULL){
			printf("\nArchivo no disponible.");
			exit(1);
		}
		do{
			printf("\nDame una palabra: ");
			scanf(" %s",palabra);
			fprintf(fp,"%s ", palabra);
		}while(strcmp(palabra, "salir")!= 0);
		fclose(fp);
	return 0;
}
