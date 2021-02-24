#include "holberton.h"


/**
 * _pow_recursion - print to strings.
 * @x: variable
 * @y: variable
 * main - Return
 * Return: void
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
