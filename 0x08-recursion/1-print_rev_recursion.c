#include "holberton.h"
#include <string.h>

/**
 * _print_rev_recursion - copies memory area.
 * @s: variable
 * main - Return
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);
}
_putchar (s[0]);
}
