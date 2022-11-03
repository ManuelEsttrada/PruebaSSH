#include <stdio.h>
#include <string.h>

int main(void){
	int valor;
	char frase1[80], frase2[80];
		printf("\nDame una palabra o frase: ");
		scanf(" %[^\n]", frase1);
                printf("\nDame otra palabra o frase: ");
                scanf(" %[^\n]", frase2);
		valor= strcmp(frase1, frase2);
		if (valor == 0){
			printf("\nLas dos palabras o frases son iguales\n");
		}
                if (valor > 0){ 
                        printf("\nLas dos palabras o frases 2 es menor\n");
                }
                if (valor < 0){ 
                        printf("\nLas dos palabras o frases 2 es mayor\n");
                }
	return 0;

}
