/**
*@file lineaComandos.c
*@brief este es un ejemplo para entender las lienas de comandos
*@
**/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int contarMayoresA4letras(int numComandos,char *comandos[]);

int main(int argc, char *argv[]){
	int i,pal;
	FILE *fp;
	fp=fopen(argv[1],"w");
	if(fp==NULL){
		printf("\nArchivo no disponible\n");
		exit(1);
	}
	printf("\nEl usuario ingreso %i argumentos incluyendo el ejecutable\n", argc-1);
	printf("\nEl ejecutable es: %s ", argv[0]);
	for(i=1;i<argc;i++){
		if(i!=1){
			if((argv[i][0]>='a')&&(argv[i][0]<='g')){		
				fprintf(fp, "%s\n", argv[i]);
			}
		}
		printf("\nEn la posicion es [%i] esta el argumento:  %s",i,argv[i]);
		if((strcmp(argv[i],"ibero"))==0){
			printf("\nYo estudio aqui :)\n");
		}
	}
	printf("\n");
	fclose(fp);
	pal=contarMayoresA4letras(argc, argv);
        printf("\nEl usuario ingreso %i palabras mayores a 4 caracteres\n", pal);
	return 0;
}


int contarMayoresA4letras(int numComandos,char *comandos[]){
	int i, mayores=0;
		for(i=2; i<numComandos;i++){
			if(strlen(comandos[i])>4){
			mayores=mayores+1;
			}
		}
	return mayores;
}
