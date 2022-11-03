#include <stdio.h>
#include <string.h>
int largoFrase(char fr[]);
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
		strcpy(frase1, frase2);
		printf("Se copio la frase 2 en la 1");
		printf("\nFrase 1:  %s", frase1);
		 printf("\nFrase 2:  %s", frase2);
        return 0;

}


int largoFrase(char fr[]){
	int largo,i=0;
		while(fr[i]!='\0'){
			largo=largo+1;
			i=i+1;
		}
	return largo;
}

