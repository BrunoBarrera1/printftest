#include <unistd.h>

/**
 * _putchar - escribe el caracter c a la salida estandard
 * @c: caracter a imprimir
 * Return: exito 1, error -1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
