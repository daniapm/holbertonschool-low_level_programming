#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
void _char(va_list c);
void _string(va_list s);
void _int(va_list i);
void _float(va_list f);


/**
 * print_all - Entry Point
 * @format: variable
 * Return: 0
 */

void print_all(const char * const format, ...)
{

	unsigned int i, j;

	tip_o funt[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};
	va_list value;

	va_start(value, format);

	i = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while (funt[j].a != NULL)
		{
			if (format[i] == funt[j].a[0])
			{
				funt[j].f(value);
				printf(", ");
			}
		j++;
		}
		i++;
	}
	printf("\n");
		va_end(value);
}

/**
 * _char - char
 * @c: varable char
 *
 * Return: void
 */
void _char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * _int - int
 * @i: varable int
 *
 * Return: void
 */

void _int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * _float - float
 * @f: varable float
 *
 * Return: void
 */

void _float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * _string - string
 * @s: varable srting
 *
 * Return: void
 */

void _string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (s == NULL)
		str = "(nil)";
	printf("%s", str);
}
