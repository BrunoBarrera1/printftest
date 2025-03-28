#include "main.h"
#include <stdarg.h>

/**
 * especifico - Handles format specifiers and calls corresponding functions.
 * @args: Variable argument list.
 * @especifico: The format specifier character.
 * Return: The number of characters printed.
 */
int especifico(va_list args, char especifico)
{
	int count = 0;

	switch (especifico)
	{
		case 'c':
			count += print_char(args);
			break;
		case 's':
			count += print_string(args);
			break;
		case '%':
			count += print_porciento(args);
			break;
		case 'd':
		case 'i':
			count += print_int(args);
			break;
		default:
			count += write(1, "%", 1);
			count += write(1, &especifico, 1);
	}
	return (count);
}
