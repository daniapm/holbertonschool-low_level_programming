#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
int (*get_op_func(char *s))(int, int);

/**
 * print_all - Entry Point
 * @format: variable
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list vl;
	const c;
	va_start(vl, format);
	for (i = 0; i < format; i++)
	{
		c = va_arg(vl, void *);
		printf("%.ops[i].f", c);
	}
	va_end(vl);
}

/**
 * *get_op_func - Entry Point
 * @s: variable
 * Return: 0
 */

	int (*(char *s))(int, int)
	{
		op_t ops[] = {
			{"char", c},
			{"int", i},
			{"float", f}
			{"char *", s},
			{NULL, NULL}
		};
		int i;

		i = 0;

		while (ops[i].f != NULL)
		{
			if (strcmp(s, ops[i].op) == 0)
			{
				return (ops[i].f);
			}
			i++;
		}
		return (NULL);
	}
