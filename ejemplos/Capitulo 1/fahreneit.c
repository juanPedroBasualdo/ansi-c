#include <stdio.h>

#define UPPER 300
#define STEP 20

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