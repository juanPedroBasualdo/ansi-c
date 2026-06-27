/*
Página 17
*/

/*
	lee un carácter
	while(carácter no es indicador de fin de archivo):
		manda a la salida el carácter recién leído
		lee un carácter
*/

#include <stdio.h>

int main()
{
	int c = 0;

	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
