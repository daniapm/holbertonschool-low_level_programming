#include "holberton.h"
#include <string.h>

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
size = strlen(str);
for (i = 0; i <= size; i += 2)
{
_putchar (str[i]);
}
_putchar ('\n');
return;
}
