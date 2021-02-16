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
int size;
int i;
size = 0;
while (str[size] != 0)
{
size++;
}
if (size % 2 != 0)
{
n = (size - 1) / 2;
_putchar (size + '0');
for (i = n; i <= size; i++)
{
_putchar(str[i]);
}
}
_putchar ('\n');
return;
}
