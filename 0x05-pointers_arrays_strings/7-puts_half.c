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
while (*str)
{
_putchar (*str);
str++;
}
if (*str % 2 != 0)
{
n = (str - 1) / 2;
_putchar (n);
}
}
