#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints number
 * @str: variable
 * main - Return
 * Return: void
 */
void puts_half(char *str)
{
int size;
int i;
size = strlen(str);
int n;
n = (int) (size - 1) / 2;
if (size % 2 != 0)
{
for (i = n; i <= size; i++)
{
_putchar(str[i]);
}
}
_putchar ('\n');
return;
}
