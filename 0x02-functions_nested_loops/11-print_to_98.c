#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - checks for lowercase letters
 * @n: character
 * main - Return
 *
 * Return: 0 or 1
 */
void print_to_98(int n)
{
int contador;
if (n == 98)
{
putchar (57);
putchar (56);
putchar ('\n');
}
else if (n > 98)
{
for (contador = n; contador >= 98; contador--)
{
printf("%d", contador);
if (contador != 98)
{
printf(", ");
}
}
putchar ('\n');
}
else
{
for (contador = n; contador <= 98; contador++)
{
printf("%d", contador);
if (contador != 98)
{
printf(", ");
}
}
putchar ('\n');
}
return;
}
