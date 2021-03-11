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
	int valores;
	unsigned int i;

	va_start(numeros, n);
	if (separator != NULL)
	{
	for (i = 0; i < n; i++)
	{
		valores = va_arg(numeros, int);
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
