#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: variable
 *
 * Return: void
 */

void puts2(char *str)
{
int contador = 0;
while (*(str + contador))
{
_putchar (*(str + contador));
contador = contador + 2;
}
_putchar ('\n');
}
