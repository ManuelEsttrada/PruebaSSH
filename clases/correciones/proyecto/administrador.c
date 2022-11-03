/*
*@file administrador.c
*@brief Este archivo contiene funciones para uso del administrador
*@author Equipo03
*@date 28/nov/2021 
*/
#include"definiciones.h"
/*
*@brief Esta función imprime un informe de las ventas a partir de los tickets registrados
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de ventas existentes
*@param numVentas, dato entero, numero de ventas existentes
*@return 1, dato enetero, verifica que se mostraron los datos 
*/
extern int informeVentas(Venta arr[], int numVentas){
  int i;
  float ganancias= 0;
	    if(numVentas == 0){
	      printf("No existe nigún ticket en el sistema!");
		}
	    else{
	   		printf("---------------------------------------------------------\n");
         	printf("\t\t\tLista de Ventas\t\t\t");
	      	printf("\n---------------------------------------------------------");
         	printf("\n# | Nombre | Correo | Peso | Costo\n");
	      	printf("---------------------------------------------------------");
	      	for(i=0;i<numVentas ; i++){
	           	printf("\n%i | %s | %s | %i | %i\n",i+1,arr[i].nombre,arr[i].correo,arr[i].totalPeso,arr[i].totalCosto);
	            ganancias = arr[i].totalCosto + ganancias;
	            printf("---------------------------------------------------------");
            }
	        printf("\nLa ganacia total de ventas es de $%.2f\n", ganancias);
	    	}
	return 1;
}
/*
*@brief Esta función imprime un menu para informe de los clientes a partir de los clientes registrados
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@param arr[], arreglo de clientes existentes
*@return void
*/
extern void informeClientes(Cliente arr[], int numClientes){
   int opcionCliente;
   		do{
   			system("clear");
   			encabezadoVentana();
	    	printf("Administrador, que desea\n[1]Lista de clientes\n[2]Ordenar clientes\n[3]Buscar un cliente\n[4]Salir\nIngrese el número de la opción elegida: ");
	    	scanf("%i", &opcionCliente);
		    switch(opcionCliente){
		        case 1:
		            listaClientes(arr, numClientes);
		            break;
		        case 2:
		            ordenarClientes(arr, numClientes);
		            break;
		        case 3:
		            buscarClientes(arr);
		            break;
		    	case 4:
		    		break;
		    	default:
		    		printf("\nOpción no valida, por favor ingrese una opción valida\n");
			    	getchar();
			        getchar();
					break;
			}
		}while((opcionCliente>4)||(opcionCliente<1));
  return;
}
/*
*@brief Esta función imprime una lista de los clientes a partir del arreglo de clientes y numero de usuarios
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@param numUsuarios, dato enetero, numero de clientes
*@return void
*/
extern void listaClientes(Cliente arr[], int numUsuarios){
   int i;
   		if(numUsuarios==0){
	      		printf("\nNo existe nigún usuario en el sistema!\n");
	    	}
	   	else{
	   		printf("\n---------------------------------------------------------\n");
	      		printf("\t\t\tLista Cliente\t\t\t");
			printf("\n---------------------------------------------------------\n");
	      		printf("# | Nombre | Correo | Dirección | Contraseña\n");
	      		printf("---------------------------------------------------------\n");
			for(i=0;i<numUsuarios;i++){
	 		        printf("\n%i | %s | %s |%s | %s\n",i+1,arr[i].nombre,arr[i].correo,arr[i].direccion,arr[i].contrasenia);
				printf("---------------------------------------------------------");
		        }
	        }
	return;
}
/*
*@brief Esta función ordena clientes por nombre o correo según se solicite
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@param numClientes, numero entero de clientes existentes
*@return void 
*/
extern void ordenarClientes(Cliente arr[], int numClientes){
	int dato, nomA, nomB;
    int i,j,k,l;
	Cliente temp;
	  	printf("\n¿Comó deseas ordenar la lista?\n[0]Correo\n[1]Nombre\nIngresa el numero de la opción elegida: ");
	  	scanf(" %i", &dato);
	  	
	  	if(dato==0){
	  		printf("\nSe ordenarán los clientes por su correo...\n");
                for(i=0; i<numClientes; i++){
                        for(j=i+1; j<numClientes; j++){
                                if(strcmp(arr[i].correo,arr[j].correo)>0){
                                        temp = arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=temp;
                                }
                        }
                }	
	     	printf("\nLos clientes odenados por correo son: \n");
	    	for(i=0; i<numClientes;i++){
				printf("\n%i\t%s\t%s\t%s\t%s\n",i+1,arr[i].nombre,arr[i].correo,arr[i].direccion,arr[i].contrasenia);
				printf("---------------------------------------------------------");	 
			}
		}
		
	  	if(dato == 1){
	    	printf("\nSe ordenarán los clientes por su nombre...\n");
	        for(k=0; k<numClientes; k++){
                for(l=k+1; l<numClientes; l++){
                    if(strcmp(arr[k].nombre,arr[l].nombre)>0){
                        temp = arr[k];
                        arr[k]=arr[l];
                        arr[l]=temp;
                    }
                }
            }	
	    	printf("\nLos clientes odenados por nombre son: \n");
	     	for(k=0; k<numClientes; k++){
				printf("\n%i\t%s\t%s\t%s\t%s\n",k+1,arr[k].nombre,arr[k].correo,arr[k].direccion,arr[k].contrasenia);
				printf("---------------------------------------------------------");	 
	        }
		}
		return;
	}
/*
*@brief Esta función busca clientes en la base de datos a partir de un correo brindado
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@return void
*/
extern void buscarClientes(Cliente arr[]){
	int j, encontrar; 
	char correo[LARGOCORREO];
		printf("Ingresa el correo del cliente que deseas encontrar: ");
		scanf(" %s", correo);
		for(j = 0; j<MAXCLIENTES; j++){
	        if((strcmp(arr[j].correo, correo))==0){
	            printf("\nse encontro el siguente cliente apartir del correo proporcionado\n");
	            printf("---------------------------------------------------------\n");	 
	            printf("Nombre | Correo | Dirección | Contraseña\n");
	            printf("---------------------------------------------------------\n");	 
	            printf("%s | %s | %s | %s\n",arr[j].nombre,arr[j].correo,arr[j].direccion,arr[j].contrasenia );
   	            printf("---------------------------------------------------------\n");	 
	            encontrar=1;
	          }
	    }
	  	if(encontrar != 1){
			printf("no se encontro ningún cliente con ese correo\n");
	    }
	return;
}
