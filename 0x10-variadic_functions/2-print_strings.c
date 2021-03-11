#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Entry Point
 * @n: variable
 * @separator: variable
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list cadena;
char *c;
	va_start(cadena, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(cadena, char *);
	if (i != (n - 1) && separator != NULL)
	{
	if (c == NULL)
	{
		printf("nil");
	}
		printf("%s%s", c, separator);
	}
	else
	{
		printf("%s", c);
	}
	}
	printf("\n");
	va_end(cadena);
}

