#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: variable
 * main - Return
 * Return: void
 */
void puts2(char *str)
{
int size;
int i;
size = 0;
while (str[size] != 0)
{
size++;
}
for (i = 0; i <= size; i += 2)
{
_putchar (str[i]);
}
_putchar ('\n');
return;
}
