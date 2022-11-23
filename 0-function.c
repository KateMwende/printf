#include "main.h"
#include <stdio.h>
/**
 * printf_char - funtion that print char.
 * @list: arguments.
 * Return: 0.
 */

int printf_char(va_list list)
{
	int arg = va_arg(list, int);

	putchar(arg);

	return (1);
}
/**
 * printf_str - funtion that print str.
 * @list: arguments.
 * Return: 0.
 */
int printf_str(va_list list)
{
	int i;
	char *ptr = va_arg(list, char *);
	char *ptrNULL = "(null)";

	if (ptr == NULL)
		for (i = 0; ptrNULL[i] != '\0'; i++)
			putchar(ptrNULL[i]);
	else
		for (i = 0; ptr[i] != '\0'; i++)
			putchar(ptr[i]);

	return (i);

}
/**
 * printf_porc - function that prints %
 * @list: arguments.
 * Return: 0.
 */
int printf_porc(va_list list)
{
	(void)list;
	putchar('%');

	return (1);
}
