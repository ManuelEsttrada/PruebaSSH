/*
*@file cliente.c
*@brief Este archivo contiene funciones para uso del cliente
*@author Equipo03
*@date 28/nov/2021 
*/
#include"definiciones.h"
/*
*@brief Esta función muestra un menú de ayuda para el usuario
*@author Equipo03
*@date 28/nov/2021
*@param void
*@return void
*/
extern void ayuda(void){
	int ayuda, opcion;
		do{
			system("clear");
			encabezadoVentana();
	    	printf("¿En que necesita ayuda?\n[1]Acceso como usuario\n[2]Registro de Usuario\n[3]Proceso de compra\n[4]Información sobre componentes de la bicicleta\n[5]Salir\nIngrese el número de la opción elegida: ");
	        scanf(" %i",&ayuda);
	        switch(ayuda){
	        	case 1:
	        		printf("\nManual de ayuda para Acceso como usuario");
	            	printf("\nPaso 1: En la ventana principal elige la opcion \"[1]Usuario\" para acceder como usuario");
	            	printf("\nPaso 2: Elige la opción de Iniciar sesión");
	            	printf("\nPaso 3: Ingresa tu correo");
	            	printf("\nPaso 4: Ingresa tu contraseña de usuario");
	            	printf("\nPaso 5: Accede al sistema\n");
			    	getchar();
			    	getchar();
	        		break;
	        	case 2:
	        		printf("\nManual de ayuda para Acceso como usuario");
	            	printf("\nPaso 1: En la ventana principal elige la opcion \"[1]Usuario\" para acceder como usuario");
	            	printf("\nPaso 2: Elige la opción de registrarse");
	            	printf("\nPaso 3: Ingresa tu numero de IFE");
	            	printf("\nPaso 4: Ingresa tu nombre");
	            	printf("\nPaso 5: Ingresa tu correo personal");
	            	printf("\nPaso 6: Ingresa tu dirección");
	            	printf("\nPaso 7: Crea e ingresa tu contraseña de cuenta");
	            	printf("\nPaso 8: Confirma tus datos\n");   
			        getchar();
			        getchar();
	        		break;
	        	case 3:
	        		printf("\nManual de ayuda para proceso de compra");
	            	printf("\nPaso 1: En la ventana principal escribe \"si\" para comenzar a personalizar tu bicicleta");
	            	printf("\nPaso 2: Elige el tipo de manubrio de tu bici: estandar, urbano o deportivo");
	            	printf("\nPaso 3: Elige el tipo de asiento  de tu bici: estandar o deportivo");
	            	printf("\nPaso 4: Elige el tipo de luces  de tu bici: ");
	            	printf("\nPaso 5: Elige el tipo de cuadro de tu bici: acero, acero-alumninio y titanio");
	            	printf("\nPaso 6: Elige el rack de tu bici");
	            	printf("\nPaso 7: Elige el tipo de llantas de tu bici: estandar, deportivas o kevlar");
	            	printf("\nPaso 8: Elige el tipo de velocidadees de tu bici: 1, 3, 6 y 8");
	            	printf("\nPaso 9: Escribe \"si\" al final de la personalización para poder comprar la bici");
	            	printf("\nPaso 10: Verifica tu ticket de compra\n");
			    	getchar();
			    	getchar();
	        		break;
	        	case 4:
		        	do{
		        		system("clear");
		        		encabezadoVentana();
				        printf("¿A cerca de que componente deseas saber más?\n[1]Manubrio.\n[2]Asiento.\n[3]Luces.\n[4]Cuadro.\n[5]Rack trasero.\n[6]Llantas.\n[7]colores\nIngrese el número de la opción elegida: ");
				        scanf(" %i", &opcion);
				        if((opcion>0)&&(opcion<8))printf("\nPara esa opcion contamos con los siguente componentes: ");
				        switch(opcion){
				        	case 1:
				        		printf("\nEstandar | Urbano | Deportivo\n");
				        		break;
				        	case 2:
				        		printf("\nPilas | Cargables-Usb | Dinamo\n");
				        		break;
				        	case 3:
				        		printf("\nAcero | Acero-alumninio | Titanio\n");
				        		break;
				        	case 4:
				        		printf("\Estándar | Deportivo\n");
				        		break;
				        	case 5:
				        		printf("\nCon rack | Sin rack\n");
				        		break;
				        	case 6:
				        		printf("\Estándar | Deportivas | Kevlar\n");
				        		break;
				        	case 7:
				        		printf("\nBlanco | Rojo | Verde | Azul | Plateado | Negro | Rosa\n");
				        		break;
				    		default:
				    			printf("\nOpción no valida, por favor Ingrese una opcicón valida\n");
			                    getchar();
			                    getchar();
				    			break;
						}  
					}while((opcion>7)||(opcion<1));
	        		break;
	        	case 5:
	        		break;
	        	default:
				  	printf("\nOpción no valida, por favor Ingrese una opcicón valida\n");
			    	getchar();
			    	getchar();
					break;        	
			}	
		}while((ayuda>5)||(ayuda<1));
    return;
}
/*
*@brief Esta función registra clientes al arreglo de clientes ya existente
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de clientes existentes
*@param *pnumClientes, puntero entero para modificar el número de clientes
*@return void
*/
extern void registrarUsuario(Cliente arr[], int *pnumClientes){
	char opcion[2];
    int i;

        printf("\n¿Deseas registrarte como cliente?\nEscribe \"si\" o \"no\" para continuar: ");
        scanf(" %s", opcion);

        if((strcmp(opcion,"si")==0)||(strcmp(opcion,"SI")==0)){
        		*pnumClientes=*pnumClientes+1; 
				printf("\n>>>REGISTRO<<<");
            	printf("\nIngresa tu número de IFE: ");
            	scanf(" %i", &arr[*pnumClientes-1].IFE);	
            	fflush(stdin);
            	printf("\nIngresa tu nombre completo: ");
            	scanf(" %[^\n]", arr[*pnumClientes-1].nombre);
            	fflush(stdin);
            	printf("\nIngresa tu direccion: ");
            	scanf(" %[^\n]", arr[*pnumClientes-1].direccion);
		fflush(stdin);
            	printf("\nIngresa tu correo: ");
            	scanf(" %s", arr[*pnumClientes-1].correo);
		fflush(stdin);             
            	printf("\nCrea tu contraseña(sin espacios): ");
            	scanf(" %s", arr[*pnumClientes-1].contrasenia);
		}	
        else{
            printf("\nRegistro cancelado\n");
        }
    return;
}
/*
*@brief Esta función imprime las características de una estructura de tipo Bicicleta
*@author Equipo03
*@date 28/nov/2021
*@param bicicleta, estructura de Bicicleta a imprimir
*@return void
*/
extern void mostrarBici(Bicicleta bicicleta){
		printf("\nTu bicicleta tienen los siguientes componentes:\n");
		//MUESTRA MANUBRIO
		switch(bicicleta.manubrio){
			case 1:
				printf("1.-Manubrio: Estándar\n");
				break;
			case 2:
				printf("1.-Manubrio: Urbano\n");
				break;
			case 3:
				printf("1.-Manubrio: Deportivo\n");
				break;
		}
		//MUESTRA LUCES
		switch(bicicleta.luces){
			case 1:
				printf("2.-Luces: Pilas\n");
				break;
			case 2:
				printf("2.-Luces: Cargable-USB\n");
				break;
			case 3:
				printf("2.-Luces: Dínamo\n");
				break;
		}
		//MUESTRA CUADRO
		switch(bicicleta.cuadro){
			case 1:
				printf("3.-Cuadro: Acero\n");
				break;
			case 2:
				printf("3.-Cuadro: Acero-Aluminio\n");
				break;
			case 3:
				printf("3.-Cuadro: Titanio\n");
				break;
		}
		//MUESTRA ASIENTO
		switch(bicicleta.asiento){
			case 1:
				printf("4.-Asiento: Estándar\n");
				break;
			case 2:
				printf("4.-Asiento: Deportivo\n");
				break;
		}
		//MUESTRA RACK
		switch(bicicleta.rack){
			case 1:
				printf("5.-Rack: Con rack\n");
				break;
			case 2:
				printf("5.-Rack: Sin rack\n");
				break;
		}
		//MUESTRA LLANTAS
		switch(bicicleta.llantas){
			case 1:
				printf("6.-Llantas: Estándar\n");
				break;
			case 2:
				printf("6.-Llantas: Deportivas\n");
				break;
			case 3:
				printf("6.-Llantas: Kevlar\n");
				break;
		}
		//MUESTRA VELOCIDADES
		switch(bicicleta.velocidades){
			case 1:
				printf("7.-velocidades: 1 velocidad\n");
				break;
			case 2:
				printf("7.-velocidades: 3 velocidades\n");
				break;
			case 3:
				printf("7.-velocidades: 6 velocidades\n");
				break;
			case 4:
				printf("7.-velocidades: 8 velocidades\n");
				break;
		}
		//MUESTRA COLOR
		switch(bicicleta.color){
			case 1:
				printf("8.-Color: Blanco\n");
				break;
			case 2:
				printf("8.-Color: Rojo\n");
				break;
			case 3:
				printf("8.-Color: Verde\n");
				break;
			case 4:
				printf("8.-Color: Azul\n");
				break;
			case 5:
				printf("8.-Color: Plateado\n");
				break;
			case 6:
				printf("8.-Color: Negro\n");
				break;
			case 7:
				printf("8.-Color: Rosa\n");
				break;
		}
	return;
}
/*
*@brief Esta función permite personalzar una bicicleta por medio de un puntero
*@author Equipo03
*@date 28/nov/2021
*@param *pBicicleta, puntero para modificar un struct Bicicleta
*@param *ptotalPeso, puntero para modificar el valor del peso total de la bici
*@return totalCosto, valor entero del costo total de la bicicleta
*/
extern int personalizarBicicleta(Bicicleta *pBicicleta, int *ptotalPeso){
	int totalCosto=0;
	Bicicleta bici;
	bici.manubrio=1;
	bici.luces=1;
	bici.cuadro=1;
	bici.asiento=1;
	bici.rack=2;
	bici.llantas=1;
	bici.velocidades=1;
	bici.color=1;
	printf("\nEsta es una Bicicleta estandar, tiene un peso de 11kg y un costo de $900 \n");
	mostrarBici(bici);
	printf("\nAhora da ENTER para crear tu propia bicicleta... \n");
	getchar();
	getchar();
	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de manubrio que deseas agregar a tu bicicleta:\n[1]Estándar\n[2]Urbano\n[3]Deportivo\nIngresa el número de opción elegida: ");
		scanf(" %i", &pBicicleta->manubrio);
		if((pBicicleta->manubrio>3)||(pBicicleta->manubrio<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
	     	getchar();
	     	getchar();
		}
		else{
			switch(pBicicleta->manubrio){
				case 1:
					totalCosto=totalCosto+0;
					*ptotalPeso=*ptotalPeso+0;
					break;
				case 2:
					totalCosto=totalCosto+150;
					*ptotalPeso=*ptotalPeso+200;
					break;
				case 3:
					totalCosto=totalCosto+270;
					*ptotalPeso=*ptotalPeso-100;
					break;
			}
		}
	}while((pBicicleta->manubrio>3)||(pBicicleta->manubrio<1));
	
	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de Luces que deseas agregar a tu bicicleta:\n[1]Pilas\n[2]Cargables-USB\n[3]Dínamo\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->luces);
		if((pBicicleta->luces>3)||(pBicicleta->luces<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
	     	getchar();
	     	getchar();
		}
		else{
			switch(pBicicleta->luces){
			case 1:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			case 2:
				totalCosto=totalCosto+92;
				*ptotalPeso=*ptotalPeso-50;
				break;
			case 3:
				totalCosto=totalCosto+152;
				*ptotalPeso=*ptotalPeso+250;
				break;
			}	
		}
	}while((pBicicleta->luces>3)||(pBicicleta->luces<1));
	
	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de Cuadro que deseas agregar a tu bicicleta:\n[1]Acero\n[2]Acero-Aluminio\n[3]Titanio\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->cuadro);
		if((pBicicleta->cuadro>3)||(pBicicleta->cuadro<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
	     	getchar();
	     	getchar();	
	   }
		else{
			switch(pBicicleta->cuadro){
			case 1:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			case 2:
				totalCosto=totalCosto+690;
				*ptotalPeso=*ptotalPeso-900;
				break;
			case 3:
				totalCosto=totalCosto+1500;
				*ptotalPeso=*ptotalPeso-2345;
				break;
			}
		}
	}while((pBicicleta->cuadro>3)||(pBicicleta->cuadro<1));

	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de Asiento que deseas agregar a tu bicicleta:\n[1]Estándar\n[2]Deportivo\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->asiento);
		if((pBicicleta->asiento>2)||(pBicicleta->asiento<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
		    getchar();
		    getchar();
		}
		else{
			switch(pBicicleta->asiento){
			case 1:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			case 2:
				totalCosto=totalCosto+270;
				*ptotalPeso=*ptotalPeso-100;
				break;
			}
		}
	}while((pBicicleta->asiento>2)||(pBicicleta->asiento<1));

	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de Rack que deseas agregar a tu bicicleta:\n[1]Con rack\n[2]Sin rack\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->rack);
		if((pBicicleta->rack>2)||(pBicicleta->rack<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
			getchar();
			getchar();
		}
		else{
			switch(pBicicleta->rack){
			case 1:
				totalCosto=totalCosto+270;
				*ptotalPeso=*ptotalPeso+500;
				break;
			case 2:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			}	
		}
	}while((pBicicleta->rack>2)||(pBicicleta->rack<1));

	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de Llantas que deseas agregar a tu bicicleta:\n[1]Estándar\n[2]Deportivas\n[3]Kevlar\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->llantas);
		if((pBicicleta->llantas>3)||(pBicicleta->llantas<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
			getchar();
			getchar();
		}
		else{
			switch(pBicicleta->llantas){
			case 1:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			case 2:
				totalCosto=totalCosto+270;
				*ptotalPeso=*ptotalPeso-200;
				break;
			case 3:
				totalCosto=totalCosto+315;
				*ptotalPeso=*ptotalPeso+180;
				break;
			}
		}
	}while((pBicicleta->llantas>3)||(pBicicleta->llantas<1));

	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el número de velocidades que deseas agregar a tu bicicleta:\n[1]1 velocidad\n[2]3 velocidades\n[3]6 velocidades\n[4]8velocidades\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->velocidades);
		if((pBicicleta->velocidades>4)||(pBicicleta->velocidades<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
			getchar();
			getchar();
		}
		else{
			switch(pBicicleta->velocidades){
			case 1:
				totalCosto=totalCosto+0;
				*ptotalPeso=*ptotalPeso+0;
				break;
			case 2:
				totalCosto=totalCosto+190;
				*ptotalPeso=*ptotalPeso+750;
				break;
			case 3:
				totalCosto=totalCosto+300;
				*ptotalPeso=*ptotalPeso+980;
				break;
			case 4:
				totalCosto=totalCosto+350;
				*ptotalPeso=*ptotalPeso+1100;
				break;
			}
		}
	}while((pBicicleta->velocidades>4)||(pBicicleta->velocidades<1));
	
	do{
		system("clear");
		encabezadoVentana();
		printf("\nIngresa el color que deseas agregar a tu bicicleta:\n[1]Blanco\n[2]Rojo\n[3]Verde\n[4]Azul\n[5]Plateado\n[6]Negro\n[7]Rosa\nIngresa el número de opción elegida: ");
		scanf(" %i",&pBicicleta->color);
		if((pBicicleta->color>7)||(pBicicleta->color<1)){
			printf("\nOpción no valida, por favor ingrese una opción valida\n");
			getchar();
			getchar();
		}
		else{
			switch(pBicicleta->color){
			case 1:
				totalCosto=totalCosto+0;
				break;
			case 2:
				totalCosto=totalCosto+65;
				break;
			case 3:
				totalCosto=totalCosto+55;
				break;
			case 4:
				totalCosto=totalCosto+55;
				break;
			case 5:
				totalCosto=totalCosto+190;
				break;
			case 6:
				totalCosto=totalCosto+70;
				break;
			case 7:
				totalCosto=totalCosto+90;
				break;
			}
		}
	}while((pBicicleta->manubrio>7)||(pBicicleta->manubrio<1));
	
	totalCosto=costoBase+totalCosto;
	*ptotalPeso=*ptotalPeso+pesoBase;
	mostrarBici(*pBicicleta);
	printf("\nTu Bicicleta tiene un Peso de: %i gramos\n", *ptotalPeso);
	printf("\nTu Bicicleta tiene un Costo de: $%i \n", totalCosto);
	return totalCosto;
}
/*
*@brief Esta función genera e imprime un ticket de venta y lo registra en el el arreglo de Ventas
*@author Equipo03
*@date 28/nov/2021
*@param arr[], arreglo de ventas existentes
*@param *pCliente, puntero para manipular datos de clientes
*@param *pBicicleta, puntero para manipular datos de la bicicleta
*@param totalPeso, el peso entero total de la bici comprada 
*@param totalCosto, el costo entero total de la bici comprada
*@param *numVentas, puntero para manipular el numero de ventas totales
*@return 1,dato entero, que verifica que el ticket se ha generado 
*/
extern int generarTicket(Venta arr[],Cliente *pCliente, Bicicleta *pBicicleta, int totalCosto, int totalPeso, int *numVentas){
	*numVentas=*numVentas+1;
	arr[*numVentas-1].ID=*numVentas;
	strcpy(arr[*numVentas-1].nombre, pCliente->nombre);
	strcpy(arr[*numVentas-1].correo, pCliente->correo);
	arr[*numVentas-1].bicicleta=*pBicicleta;
	arr[*numVentas-1].totalCosto=totalCosto;
	arr[*numVentas-1].totalPeso=totalPeso;
	printf("---------------------------------------------------------\n");	 
	printf("\n>>>Ticket de compra<<<");
	printf("\n---------------------------------------------------------\n");	 
	printf("\nID de venta: %i", arr[*numVentas-1].ID);
	printf("\nNombre de cliente: %s", arr[*numVentas-1].nombre);
	printf("\nCorreo del cliente: %s", arr[*numVentas-1].correo);
	printf("\nDatos de la bicicleta comprada: ");
	mostrarBici(*pBicicleta);
	printf("\nPrecio total: $%i", totalCosto);
	printf("\nPeso total: %i gramos", totalPeso);
	printf("\n---------------------------------------------------------\n");	 	
 return 1;	
}
