#include "holberton.h"

/**
 * print_diagonal - checks isdigit
 * @n: character
 * main - Return
 * Description: print diagonal line
 * Return: 0
 */

void print_diagonal(int n)
{
int contador, espacio;
for (contador = 0; contador < n; contador++)
{
for (espacio = 0; espacio < contador; espacio++)
{
_putchar (32);
}
_putchar (92);
if (contador != n - 1)
{
_putchar (10);
}
}
_putchar (10);
return;
}
