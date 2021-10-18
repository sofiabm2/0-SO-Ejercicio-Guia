#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float centigrados = 0.0;
	float farenheit = 0.0;
	
	printf("Teclee los grados Farenheit: \n\n");
	scanf("%f", &farenheit);
	centigrados = (5.0/9.0)*(farenheit-32);
	printf("\Grados Celsius:%.2f", centigrados);
}
