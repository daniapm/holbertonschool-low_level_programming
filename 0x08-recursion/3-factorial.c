#include "holberton.h"


/**
 * factorial - print to strings.
 * @n: variable
 * main - Return
 * Return: void
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
