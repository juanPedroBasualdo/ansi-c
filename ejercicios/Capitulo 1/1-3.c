#include <stdio.h>

/*
Ejercicio 1-3. Modifique el program a de conversión de temperaturas de modo
que escriba un encabezado sobre la tabla. 
*/

/*
Imprime la tabla Fahrenheit-Celsius
	para fahr = 0, 20, ... , 300
*/
int main()
{
	float fahrenheit = 0;
	float celsius = 0;

	while(fahrenheit <= UPPER)
	{
		celsius = 5 * (fahrenheit-32)/9;
		printf("%3.0f\t %6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + STEP;
	}
	return 0;
}