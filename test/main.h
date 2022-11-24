#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
  * struct printf_struct - structure
  * @p_str: pointer.
  * @f: variable.
  * Description: array.
  */
typedef struct printf_struct
{
	char *p_str;
	int (*f)(va_list x);
} strct;
int _printf(const char *format, ...);
int (*get_function(char c))(va_list a);
int printf_char(va_list list);
int printf_str(va_list list);
int printf_porc(va_list list);
int _putchar(char c);
int printf_reversed(va_list list);
#endif
