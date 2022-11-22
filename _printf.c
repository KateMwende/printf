#include <unistd.h>

/**
 * _printf - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(char c)
{
	return (write(1, &c, 1));
}

int _printf(char *)
{
	 return (write(1, &c, 1));
}
_putchar(%d)
_putchar("10")
