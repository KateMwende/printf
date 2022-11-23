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
	int cont = 0, i = -1;
	int (*z)(va_list);

	va_start(args, format);

	if (format != NULL)
	{
		i = 0;

		for (; format[cont] != '\0'; i++, cont++)
		{
			if (format[cont] != '%')
				putchar(format[cont]);
			else if (format[cont] == '%' && format[cont + 1] == '\0')
			{
				return (-1);
			}
			else if (format[cont] == '%' && format[cont + 1] != '\0')
			{
				z = get_function(format[cont + 1]);
				if (z == NULL)
					putchar(format[cont]);
				else
				{
					i = (i + z(args)) - 1;
					cont++;
				}
			}
		}
	}
	va_end(args);
	return (i);
}
