/*
Ejercicio 1-5. Modifique el programa de conversión de temperaturas de manera
que escriba la tabla en orden inverso, esto es, desde 300 grados hasta 0. 
 */

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
	float fahrenheit = UPPER;
	printf("Fahrenheit\t Celsius\n");
	for(fahrenheit ; fahrenheit >= LOWER ; fahrenheit -= STEP)
	{
		printf("%.0f\t\t %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit - 32));
	}

	return 0;
}
