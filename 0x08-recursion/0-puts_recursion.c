#include "holberton.h"


/**
 * _puts_recursion - print to strings.
 * @s: variable
 * main - Return
 * Return: void
 */

void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar (s[i]);
}
_putchar (10);
}
