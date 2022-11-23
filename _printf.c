#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
*_printf - print output with different arguements
*@format: character string
*Return: integer
*/
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	vprintk(format, args);

	va_end(args);
	putchar('\n');

	return (0);
}
