#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints number
 * @a: variable
 * @size: variable
 * main - Return
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int filas, columnas, d, i;
d = 0;
i = 0;
for (filas = 0; filas < size; filas++)
{
i += (a + filas * size)[filas];
}
for (columnas = 0; columnas < size; columnas++)
{
d += (a + columnas * size)[--filas];
}
printf("%d, %d\n", i, d);
}
