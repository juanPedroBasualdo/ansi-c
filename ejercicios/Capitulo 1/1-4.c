/*
Ejercicio 1-4: Escriba un programa que imprima la tabla correspondiente Celsius
a Fahrenheit.
 */

#include <stdio.h>

#define UPPER 120
#define STEP 10

int main()
{
	float celsius = 0;
	float fahrenheit = 0;

	printf("Celsius\t\t Fahrenheit\n");
	while(celsius < UPPER)
	{
		fahrenheit = (9.0 / 5.0) * (celsius + 32);
		printf("%.2f\t\t %6.2f\n", celsius, fahrenheit);
		celsius += STEP;
	}

	return 0;
}
