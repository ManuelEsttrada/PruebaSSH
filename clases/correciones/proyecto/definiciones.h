//Bibiliotecas y constantes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Constantes
#define LARGONOMBRE 80
#define LARGOCORREO 50
#define LARGODIRECCION 80
#define LARGOCONTRASENIA 30
#define MAXVENTAS 100
#define MAXCLIENTES 50
#define costoBase 900
#define pesoBase 11000
//Typedef 
typedef struct Bicicleta Bicicleta;
typedef struct Cliente Cliente;
typedef struct Venta Venta;
//Estructuras
struct Bicicleta{
	int manubrio;
	int luces;
	int cuadro;
	int asiento;
	int rack;
	int llantas;
	int velocidades;
	int color;
};

struct Cliente{
	int IFE;
	char nombre[LARGONOMBRE];
	char correo[LARGOCORREO];
	char direccion[LARGODIRECCION];
	char contrasenia[LARGOCONTRASENIA];
};

struct Venta{
	int ID;
	char nombre[LARGONOMBRE];
	char correo[LARGOCORREO];
	Bicicleta bicicleta;
	int totalCosto;
	int totalPeso;
};
