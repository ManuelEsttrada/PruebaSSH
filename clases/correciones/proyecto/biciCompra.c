/*
*@file BiciCompra.c
*@brief Este programa funciona como un punto de venta y personalización de bicicletas
		1)Ingreso como adminiastrador o usuario
		2)Registro de usuarios
		3)Personalización y compra de bicicletas 
		4)Acceso al menu de administrador
		5)Menú de ayuda
*@author Equipo03
*@date 28/nov/2021 
*/
#include"definiciones.h"
//Prototipos de función
//MAIN
int logIN(Cliente arr[], Cliente *cuenta, int *pnumClientes);
//ARCHIVOS
void leerDatos(Cliente arrc[],Venta arrv[], int *pnumClientes, int *pnumVentas);
void escribirDatos(Cliente arrc[],Venta arrv[], int numClientes, int numVentas);
//ADMINISTRADOR
int informeVentas(Venta arr[],int numVentas);
void informeClientes(Cliente arr[],int numClientes);
void listaClientes(Cliente arr[], int numUsuarios);
void ordenarClientes(Cliente arr[], int numClientes);
void buscarClientes(Cliente arr[]);
//CLIENTE
int personalizarBicicleta(Bicicleta *pBicicleta,int *ptotalPeso);
void mostrarBici(Bicicleta bicicleta);
int generarTicket(Venta arr[],Cliente *pCliente, Bicicleta *pBicicleta, int totalCosto, int totalPeso, int *numVentas);
void registrarUsuario(Cliente arr[], int *pnumClientes);
void ayuda(void);
//DIBUJAR VENTANA
void dibujarLinea(void);
void encabezadoVentana(void);
void pieVentana(void);


//FUNCIÓN MAIN
int main(int argc, char *argv[]){
	Cliente clientes[MAXCLIENTES], cuentaActiva;
	Venta ventas[MAXVENTAS];
	Bicicleta bici;
	char personalizar[2],comprar[2];
	int verificador, opcionAdm, i, arranque,numClientes, numVentas=0,totalCosto=0, totalPeso=0, seguirComprando=0;
		do{
			printf("¿Quieres caragar los archivos del sistema?\n[1]SI\n[2]NO\n");
			scanf(" %i", &arranque);
                        if(arranque==1){
                	        leerDatos(clientes, ventas, &numClientes,&numVentas);
                         }
			if((arranque>2)||(arranque<1)){
				printf("\nOpción invalida, por favor ingresa una opción valida\n");
			}
		}while((arranque>2)||(arranque<1));
		for(i=1;i<argc;i++){
			if((strcmp(argv[i], "-h")==0)){
				ayuda();
			}
			if((strcmp(argv[i], "-c")==0)){
				informeVentas(ventas, numVentas);
				getchar();
				getchar();
			}
				arranque=0;//Cuando se arranca por primera vez el programa no se leen archivos
		}
		verificador=logIN(clientes, &cuentaActiva, &numClientes);
		if(verificador==1){
			encabezadoVentana();
			printf("¿Deseas personalizar tu propia Bicicleta?\nEscribe \"si\" o \"no\" para continuar: ");
			scanf(" %s",comprar);
			if ((strcmp(comprar,"si")==0)||(strcmp(comprar,"SI")==0)){
				do{
					system("clear");
					encabezadoVentana();
					totalCosto=personalizarBicicleta(&bici, &totalPeso);
					printf("\n¿Deseas comprar la bicicleta?\nEscribe si o no para continuar: ");
					scanf(" %s",personalizar);
					if ((strcmp(personalizar,"si")==0)||(strcmp(personalizar,"SI")==0)){
						generarTicket(ventas, &cuentaActiva, &bici, totalCosto, totalPeso, &numVentas);
					}
				printf("\n¿Deseas personalizar una nueva bicicleta?\n[1]Si\n[2]No\nIngresa el número de la opción elegida: ");
				scanf(" %i", &seguirComprando);
				}while(seguirComprando==1);
			}

			pieVentana();
		}
		
		if(verificador==2){
			do{
				system("clear");
				encabezadoVentana();
				printf("¡HOLA ADMINISTRADOR!,¿Qué deseas hacer?\n[1]Informe de ventas\n[2]Informe de clientes\n[3]Ayuda\n[4]Salir\nIngrese el número de la opción elegida: ");
				scanf(" %i", &opcionAdm);
				switch(opcionAdm){
					case 1: 
						informeVentas(ventas, numVentas);
						break;
					case 2: 
						informeClientes(clientes, numClientes);
						break;
					case 3:
						ayuda();
					case 4:
						break;
					default:
						printf("\nOpción no valida, por favor ingrese una opción valida\n");
						getchar();
						getchar();
						break;
				}
				pieVentana();
			}while((opcionAdm>4) || (opcionAdm<1));
		}
		
		if(verificador==0){
			printf("\nUSUARIO O CONTRASEÑA INVÁLIDOS\n");
		}
		
		escribirDatos(clientes, ventas, numClientes, numVentas);
	return 0;
}
/*
*@brief Esta función lee los clientes y ventas de archivos de texto
*@author Equipo03
*@date 28/nov/2021
*@param arrc[], arreglo de clientes existentes
*@param arrv[], arreglo de ventas existentes
*@return void
*/
void leerDatos(Cliente arrc[],Venta arrv[], int *pnumClientes, int *pnumVentas){
	int i;
	FILE *fp;
	
		fp=fopen("clientes.txt","r");
		if(fp == NULL){
			system("clear");
            printf("Error al cargar los archivos del sistema,\n¡Por favor contacte al administrador!\n");
            exit(1);
        }
        fscanf(fp, "%i\n\n", &*pnumClientes);
        for(i=0; i<MAXCLIENTES; i++){
        	fscanf(fp, "%i\n", &arrc[i].IFE);
        	fscanf(fp, "%[^\n]\n", arrc[i].nombre);
        	fscanf(fp, "%[^\n]\n", arrc[i].direccion);
        	fscanf(fp, "%s\n", arrc[i].correo);
        	fscanf(fp, "%s\n\n", arrc[i].contrasenia);
		}
		fclose(fp);
	
		fp=fopen("ventas.txt","r");
		if(fp == NULL){
			system("clear");
            printf("Errror al cargar los archivos del sistema,\n¡Por favor contacte al administrador!\n");
            exit(1);
        }
        fscanf(fp, "%i\n\n", &*pnumVentas);
		for(i=0; i<MAXVENTAS; i++){
        	fscanf(fp, "%i\n", &arrv[i].ID);
        	fscanf(fp, "%[^\n]\n", arrv[i].nombre);
        	fscanf(fp, "%s\n", arrv[i].correo);
          	fscanf(fp, "%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", &arrv[i].bicicleta.manubrio,&arrv[i].bicicleta.luces,&arrv[i].bicicleta.cuadro,&arrv[i].bicicleta.asiento,&arrv[i].bicicleta.rack,&arrv[i].bicicleta.llantas,&arrv[i].bicicleta.velocidades,&arrv[i].bicicleta.color);      	
        	fscanf(fp, "%i\n", &arrv[i].totalPeso);
        	fscanf(fp, "%i\n", &arrv[i].totalCosto);
		}
		fclose(fp);
	return;
}
/*
*@brief Esta función evalua el ingreso de usuarios y administradores
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@param *pcuenta, puntero de tipo cliente que devuelve los datos del cliente ingresado
*@return login, dato entero refernte al inicio de sesión
*/
int logIN(Cliente arr[], Cliente *pcuenta, int *pnumClientes){
	int ingreso,cuentaUsuario,i,login=0;
	char correo[LARGOCORREO], contrasenia[LARGOCONTRASENIA],usuario[10];
		do{
			system("clear");		
			encabezadoVentana();
			printf("¿Desea ingresar como administrador o como usuario?\n[0]ADMINISTRADOR\n[1]USUARIO\nIngrese el número de la opción elegida: ");
			scanf(" %i", &ingreso);
			pieVentana();
			system("clear");
			if(ingreso==0){
				encabezadoVentana();
				printf("<<<INICIO DE SESIÓN>>>\n");
				printf("Ingresa el usuario de administrador: ");
				scanf(" %s", usuario);
				printf("\nIngresa la contraseña de administrador: ");
				scanf(" %s",contrasenia);
				pieVentana();
				if((strcmp(usuario,"admin")==0)&&(strcmp(contrasenia,"adminpass")==0)){
					login=2;
				}
				else{
					login=0;
				}
			}
			
			if(ingreso==1){
				encabezadoVentana();
				printf("BIENVENIDO USUARIO\n¿Qué deseas hacer?\n[1]Iniciar Sesión\n[2]Registrarse\nIngrese el número de la opción elegida: ");
				scanf(" %i", &cuentaUsuario);
				if(cuentaUsuario==2){
					registrarUsuario(arr, &*pnumClientes);
				}
				printf("\n>>>INICIO DE SESIÓN<<<\n");
				printf("\nIngresa tu correo: ");
				scanf(" %s", correo);
				printf("\nIngresa tu contraseña: ");
				scanf(" %s", contrasenia);
				for(i=0;i<*pnumClientes;i++){
					if((strcmp(correo,arr[i].correo)==0)&&(strcmp(contrasenia, arr[i].contrasenia)==0)){
						printf("\nINICIO DE SESIÓN EXITOSO...\n");
						*pcuenta=arr[i];
						login=1;
					}
					else{
						login=0;
					}
				}
				if(login==0){
						printf("\nUsuario no encontrado\n");
				}
				pieVentana();
			}
			
			if((ingreso!=1)&&(ingreso!=0)){
				system("clear");
				printf("Opción no valida, por favor ingrese una opción valida\nPresione ENTER para continuar\n");
				getchar();
				getchar();
				system("clear");

			}
			
		}while((ingreso!=1)&&(ingreso!=0));
		system("clear");
	return login;
}
/*
*@brief Esta función escribe los clientes y ventas en archivos de texto
*@author Equipo03
*@date 28/nov/2021
*@param arrc[], arreglo de clientes existentes
*@param arrv[], arreglo de ventas existentes
*@param numClientes, dato entero, numero de clientes existentes
*@param numVentas, dato entero, numero de ventas existentes
*@return void
*/
void escribirDatos(Cliente arrc[],Venta arrv[], int numClientes, int numVentas){
	int i;
	FILE *fp;
	
		fp=fopen("clientes.txt","w");
		if(fp == NULL){
			system("clear");
            printf("Errror al cargar los archivos del sistema,\n¡Por favor contacte al administrador!\n");
            exit(1);
        }
        fprintf(fp,"%i\n\n", numClientes);
        for(i=0; i<numClientes; i++){
        	fprintf(fp, "%i\n", arrc[i].IFE);
        	fprintf(fp, "%s\n", arrc[i].nombre);
        	fprintf(fp, "%s\n", arrc[i].direccion);
        	fprintf(fp, "%s\n", arrc[i].correo);
        	fprintf(fp, "%s\n\n", arrc[i].contrasenia);
		}
		fclose(fp);
	
		fp=fopen("ventas.txt","w");
		if(fp == NULL){
			system("clear");
            printf("Error al escribir los archivos del sistema,\n¡Por favor contacte al administrador!\n");
            exit(1);
        }
        fprintf(fp,"%i\n\n", numVentas);
		for(i=0; i<numVentas; i++){
        	fprintf(fp, "%i\n", arrv[i].ID);
        	fprintf(fp, "%s\n", arrv[i].nombre);
        	fprintf(fp, "%s\n", arrv[i].correo);
          	fprintf(fp, "%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", arrv[i].bicicleta.manubrio,arrv[i].bicicleta.luces,arrv[i].bicicleta.cuadro,arrv[i].bicicleta.asiento,arrv[i].bicicleta.rack,arrv[i].bicicleta.llantas,arrv[i].bicicleta.velocidades,arrv[i].bicicleta.color);      	
        	fprintf(fp, "%i\n", arrv[i].totalPeso);
        	fprintf(fp, "%i\n\n", arrv[i].totalCosto);
		}
		fclose(fp);
	return;
}
