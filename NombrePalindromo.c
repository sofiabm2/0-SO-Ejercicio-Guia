#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char palindromo[40];
int longitud;
int inicio=0;
int fin;

int main(int argc, char *argv[]) {
	
	printf("\Ingrese una palabra:\n\n");
	gets (palindromo);
	
	longitud=strlen(palindromo);
	for (fin=longitud-1; palindromo[fin]==palindromo [inicio] && fin>=0; inicio++, fin--);
	
	if(inicio==longitud)
	{
		printf("\nEs palindromo");
	}
	else
	   printf("\nNo es palindromo");
}
