/*
*@file  ejemploStruct.c
*@brief 1.- Capturar e imprimir datos de structs
	2.- capturara e imprimir datos en una variable de arreglo structs
	3.- ordenar datos de structs segun un criterio 
	4.- localizar un registro 
	5.- preguntar si desea modificar los datos localizados
	6.- haga una  funcion que mande la direccion de una variable de un struct 
	    modifica el promedio de la funcion en la direccion de nuestro arreglo
	7.- al final guardar los datos en archivos txt
*/
#include"misDef.h"

void registrarAlumno(struct alumno arr[]);
void mostrarAlumno(struct alumno arr[]);
void ordenarXpromedio(struct alumno arr[]);
void ordenarXnombre(struct alumno arr[]);
void buscarAlumno(struct alumno arr[]);
void modificarPromedio(struct alumno *pAlumno);
void guardarDatosArchivo(struct alumno arr[], char nomArch[]);
void leerDatosArchivo(struct alumno arr[], char nomArch[]);

int main(void){
	int indice, opcion;
	datAlumno unAlumno, *punAlumno;
	struct alumno alumnos[3];
	
	printf("\nDesea registrar a los alumnos?: ");
	scanf(" %i", &opcion);
	if(opcion==1){
		leerDatosArchivo(alumnos, "alumnos.txt");
		mostrarAlumno(alumnos);	
	}
	else{
		
	registrarAlumno(alumnos);
	mostrarAlumno(alumnos);
	ordenarXpromedio(alumnos);
	printf("\nLos alumnos ordenados: \n");
	mostrarAlumno(alumnos);
	ordenarXnombre(alumnos);
	printf("\nLos alumnos ordenados: \n");
	mostrarAlumno(alumnos);
	buscarAlumno(alumnos);
	printf("\nDame el indice del alumno a modificar: ");
	scanf(" %i", &indice);
	modificarPromedio(&alumnos[indice]);
	mostrarAlumno(alumnos);
	printf("\nDa un enter para continuar...");
	getchar();
	system("clear");
	guardarDatosArchivo(alumnos,"alumnos.txt");
	printf("\nLos datos se han guardado en alumnos.txt\n");

	}
return 0;

}

void registrarAlumno(struct alumno arr[]){
	int i;
		for(i=0;i<3;i++){
			printf("--- DATOS DEL ESTUDIANTE %i ---", i+1);
			printf("\nDame el nombre: ");
			scanf(" %[^\n]", arr[i].nombre);
                        printf("\nDame el promedio: ");
                        scanf(" %f", &arr[i].promedio);
                        printf("\nDame el n??mero de cuenta: ");
                        scanf(" %i", &arr[i].numCuenta);
                        printf("\nDame el dia mes a??o (separados por espacios):");
                        scanf(" %i %i %i", &arr[i].nacimiento.dia, &arr[i].nacimiento.mes, &arr[i].nacimiento.anio);
		}
	return;
}

void mostrarAlumno(struct alumno arr[]){
        int i;
                for(i=0;i<3;i++){
                        printf("--- DATOS DEL ESTUDIANTE %i.-%s | %f | %i | %i/%i/%i\n", i+1,arr[i].nombre,arr[i].promedio, arr[i].numCuenta, arr[i].nacimiento.dia, arr[i].nacimiento.mes, arr[i].nacimiento.anio);
                }
        return;
}


void ordenarXnombre(struct alumno arr[]){
	int i,j;
	struct alumno temp;

		for(i=0; i<3; i++){
			for(j=i+1; j<3; j++){
				if(strcmp(arr[i].nombre,arr[j].nombre)>0){
					temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}

	return;
}

void ordenarXpromedio(struct alumno arr[]){
     int i,j;
        struct alumno temp;
                for(i=0; i<3; i++){
                        for(j=i+1; j<3; j++){
                                if(arr[i].promedio<arr[j].promedio){
                                        temp = arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=temp;
                                }
                        }
                }
        return;

}

void buscarAlumno(struct alumno arr[]){
     int cuenta,i,encontrado=0;
     	printf("\nDame el numero de cuenta del alumno que buscas: ");
	scanf("%i",&cuenta);
	for(i=0;i<3;i++){
		if(cuenta == arr[i].numCuenta){
			encontrado=1;
			printf("\nSe encontro al alumno: %s con promedio:%f y naci?? en el mes: %i\n", arr[i].nombre, arr[i].promedio, arr[i].nacimiento.mes);
		}
	}
	if(encontrado==0){
		printf("\nNo se encontro al alumno");
	}
      return;

}

void modificarPromedio(struct alumno *pAlumno){
	float promedio;
	char nom[80];
                printf("\nDame el nuevo nombre: ");
                scanf(" %[^\n]", nom);
		strcpy(pAlumno->nombre, nom);
		printf("\nDame el nuevo promedio: ");
		scanf(" %f", &promedio);
		pAlumno->promedio = promedio;
	return;
}

void guardarDatosArchivo(struct alumno arr[], char nomArch[]){
	FILE *fp;
	int i;	
		fp=fopen(nomArch,"w");
		if(fp == NULL){
			printf("\nArchivo no disponible");
			exit(1);
		}
		for(i=0;i<3;i++){
			fprintf(fp,"%i\n", arr[i].numCuenta);
			fprintf(fp,"%s\n", arr[i].nombre);
			fprintf(fp,"%i/%i/%i\n", arr[i].nacimiento.dia, arr[i].nacimiento.mes, arr[i].nacimiento.anio);
			fprintf(fp,"%f\n", arr[i].promedio);
			fprintf(fp,"\n");
		}
		fclose(fp);
	return;
}

void leerDatosArchivo(struct alumno arr[], char nomArch[]){
	FILE *fp;
        int i;
                fp=fopen(nomArch,"r");
                if(fp == NULL){
                        printf("\nArchivo no disponible");
                        exit(1);
                }
		for(i=0;i<3;i++){
                fscanf(fp, "%i\n", &arr[i].numCuenta);
                fscanf(fp, "%[^\n]", arr[i].nombre);
                fscanf(fp, "%i/%i/%i\n", &arr[i].nacimiento.dia, &arr[i].nacimiento.mes, &arr[i].nacimiento.anio);
                fscanf(fp, "%f\n\n", &arr[i].promedio);
		}
		fclose(fp);
        return;

}

