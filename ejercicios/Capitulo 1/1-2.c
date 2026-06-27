#include <stdio.h>

/*
Ejercicio 1-2. Experimente el descubrir qué pasa cuando la cadena del argumento de printf contiene \c , en donde c es algún carácter no puesto en lista anteriormente. 
*/
int main()
{
	printf("Hello, World! \a"); // Agregó un espacio
	printf("Hello, World! \b"); // Nada (parece)
	printf("Hello, World! \e"); // Borró el H del siguiente
	printf("Hello, World! \f"); // Mucho padding
	printf("Hello, World! \n"); // New line (obvio)
	printf("Hello, World! \r"); // Nada (parece)
	printf("Hello, World! \t"); // Doble espacio
	printf("Hello, World! \v"); // Nada (parece)

	/* ¡No funcionan!
	// printf("Hello, World! \c");
	// printf("Hello, World! \d");
	// printf("Hello, World! \g");
	// printf("Hello, World! \h");
	// printf("Hello, World! \i");
	// printf("Hello, World! \j");
	// printf("Hello, World! \k");
	// printf("Hello, World! \l");
	// printf("Hello, World! \m");
	// printf("Hello, World! \o");
	// printf("Hello, World! \p");
	// printf("Hello, World! \q");
	// printf("Hello, World! \s");
	// printf("Hello, World! \u");
	// printf("Hello, World! \w");
	// printf("Hello, World! \x");
	// printf("Hello, World! \y");
	// printf("Hello, World! \z");
	*/
}