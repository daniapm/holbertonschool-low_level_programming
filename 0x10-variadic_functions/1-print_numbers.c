#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Entry Point
 * @n: variable
 * @separator: variable
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numeros;
	unsigned int i, valores;

	if (separator != NULL)
	{
	va_start(numeros, n);

	for (i = 0; i < n; i++)
	{
		valores = va_arg(numeros, unsigned int);
	if (i != n - 1)
	{
		printf("%d%s", valores, separator);
	}
	else
	{
		printf("%d", valores);
	}
	}
	printf("\n");
	}
	va_end(numeros);
}
