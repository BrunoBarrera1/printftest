#include "main.h"
#include <stdarg.h>

/**
 * print_porciento - imprime un %
 * @args: variable arg list (unused)
 * Return: num of chars printed
 */
int print_porciento(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
