#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: variable
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
