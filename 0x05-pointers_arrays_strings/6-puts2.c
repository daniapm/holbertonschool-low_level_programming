#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: variable
 * main - Return
 * Return: void
 */
void puts2(char *str)
{
while (*str)
{
_putchar (*str);
if (*str >= 2)
str += 2;
}
_putchar (10);
return;
}
