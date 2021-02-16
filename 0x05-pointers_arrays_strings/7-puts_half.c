#include "holberton.h"

/**
 * puts_half - prints number
 * @str: variable
 * main - Return
 * Return: void
 */
void puts_half(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n++)
{
if (n > 4) 
{
_putchar (str[n]);
}
}
_putchar (10);
}
