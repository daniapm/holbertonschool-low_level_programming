#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: variable
 * main - Return
 *
 * Return: 0 or 1
 */

void print_triangle(int size)
{
int contador, numeral;
if (size <= 0)
{
_putchar (10);
}
for (contador = 0; contador < size; contador++)
{
for (numeral = size - 1; numeral >= 0; numeral--)
{
if (numeral > contador)
{
_putchar (32);
}
else
{
_putchar (35);
}
}
_putchar(10);
}
return;
}
