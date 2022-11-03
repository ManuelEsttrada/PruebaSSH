/**
*@brief El prgrama escribe letras en un archivo hasta que se ingrese 's'
**/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	char letra;
	
		fp=fopen("letras.txt","a");//Se abre el archivo para anexar
		if(fp==NULL){
			printf("\nArchivo no disponible.");
			exit(1);
		}
		do{
			printf("\nDame una letra: ");
			scanf(" %c",&letra);
			fprintf(fp,"%c ", letra);
		}while(letra!='s');
		fclose(fp);
	return 0;
}
