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
}
if (i % 2 == 0)
{
for (i = i/2; str[i] != '\0'; i++)
{
_putchar (str[i]);
}
}
else if (i % 2 != 0)
{
i++;
for (i = i/2; str[i] != 0; i++)
{
_putchar (str[i]);
}
}
_putchar ('\n');
}  
