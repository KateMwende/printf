#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*
* state
*0: normal
*1: escape
*/

/**
*vprintk - print output
*@format: character string
*@args: arguements
*Return: nothing
*/
void vprintk(const char *format, va_list args)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			} else
			{
				putchar(*format);
			}

		} else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
				{
					char ch = (va_arg(args, int));

					putchar(ch);
					break;
				}
				case 's':
				{
				const char *s = va_arg(args, char*);

				while (*s)
				{
					putchar(*s++);
				}
					break;
				}
			}
		}
		format++;
	}
}
/**
*_printf - print output with different arguments
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
