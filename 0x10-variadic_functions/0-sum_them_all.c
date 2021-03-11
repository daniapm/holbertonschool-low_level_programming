#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry Point
 * @n: variable
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s, valor, i;
	va_list parametros;

	if (n == 0)
	{
		return (0);
	}
	va_start(parametros, n);
	s = 0;
	for (i = 0; i < n; ++i)
	{
		valor = va_arg(parametros, int);
		s += valor;
	}
	va_end(parametros);
	return (s);
}
