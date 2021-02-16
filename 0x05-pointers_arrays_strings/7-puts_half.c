#include "holberton.h"

/**
 * puts_half - prints number
 * @str: variable
 * main - Return
 * Return: void
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i > 4)
{
_putchar (str[i]);
}
}
_putchar (10);
}
