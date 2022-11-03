#include<stdio.h>

int factorial(int num);
int factorialRecursivo(int num);
int main(void){
	int numero, resultado;
		printf("\nDame el número del que quieras obtener el factorial: ");
		scanf(" %i", &numero);
		resultado=factorial(numero);
		printf("\nEl resultado del factorial es: %i\n", resultado);
		resultado=factorialRecursivo(numero);
		printf("\nEl resultado del factorial recursivo es: %i\n", resultado);
	return 0;
}


int factorial(int num){
	int resultado=0,i;
		for(i=1;i<=num;i++){
			resultado=resultado*i;
		}
	return resultado;
}

int factorialRecursivo(int num){
	int  factorial=1;
		if(num==0){
		factorial = 1;
		}
		else{
			factorial = num*factorialRecursivo(num-1);
		}
	return factorial;
}
