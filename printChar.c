#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Imprime un carácter.
 * @arg: Lista de argumentos variables.
 * Return: Número de caracteres impresos.
 */
int print_char (va_list arg)
{
	char c = va_arg(arg, int);

	return (write(1, &c, 1));
}
