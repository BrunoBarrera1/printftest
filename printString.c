#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_string - Prints a string.
 * @arg: Variable argument list.
 * Return: Number of characters printed.
 */
int print_string(va_list arg)
{
	int i = 0;
	int counter = 0;
	char *s = va_arg(arg, char*);

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		counter++;
		i++;
	}
	return (counter);
}
