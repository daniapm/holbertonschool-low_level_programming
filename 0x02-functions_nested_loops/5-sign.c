#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - checks for lowercase letters
 * @n: character
 * main - Return
 * Description: islower
 * Return: 0 or 1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
