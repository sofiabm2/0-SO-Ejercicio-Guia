#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char peticion[100];
	char respuesta[100];
	
	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19");
	// Resultado: "Miguel*47-Maria*22-Marcos*19"
	//Van a aparecer los mayores de edad
	
	char nombre[20];
	int edad;	
	char *p = strtok (peticion, "/");
	while (p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, "/");
		edad = atoi (p);
		if (edad > 18)
			sprintf (respuesta, "%s%s*%d-", respuesta, nombre, edad); //Acumulamos informacion sobre la respuesta
		
		p = strtok (NULL, "/");
	}
	
	//Quitaremos el el guion final
	respuesta [strlen (respuesta) -1] = '\0';
	
	printf ("Resultado: %s\n", respuesta);
}
