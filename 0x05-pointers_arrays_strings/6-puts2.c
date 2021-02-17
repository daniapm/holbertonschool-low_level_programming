#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: variable
 *
 * Return: void
 */

void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str = str + 2;
}
_putchar('\n');
}
