#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char cadena[20];


int main(int argc, char *argv[]) {
	
	printf("\Ingrese un nombre:\n\n");
	gets (cadena);
	printf("Nombre original: %s\n", cadena);
	
	for (int indice=0; cadena[indice] != '\0'; ++indice)
	{
		cadena[indice] =toupper (cadena[indice]);
	}
	printf("Nombre en mayusculas: %s\n", cadena);
	
}
