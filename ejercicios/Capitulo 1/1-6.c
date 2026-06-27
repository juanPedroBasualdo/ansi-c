/*
Ejercicio 1-6. Verifique que la expresión getchar() != EOF es 0 o 1.
*/

#include <stdio.h>

int main()
{
	int c = 0;
	int isEOF = 0;
	
	while(c = getchar() != EOF) {
		isEOF = (c != EOF);
		putchar(c);
		printf("%d\n", isEOF);
	}

}
