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
int i, j, diagonal1, diagonal2, cont;
cont = 0;
for (i = 0; i < size * size; i += size + 1)
{
diagonal1 += a[i];
}
for (j = size - 1; j < size * size; j += size - 1)
{
if(cont < size)
{
diagonal2 += a[j];
}
cont++;
}
printf("%d, %d\n", diagonal1, diagonal2);
}
