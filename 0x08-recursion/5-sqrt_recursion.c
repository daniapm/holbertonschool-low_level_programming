#include "holberton.h"


/**
 * _sqrt_recursion - print to strings.
 * @n: variable
 * main - Return
 * Return: void
 */
int _sqrt_recursion(int n)
{
int a;
if (n < 0)
{
return (-1);
}
a = resultado(n, 1);
return (a);
}
int resultado(int n, int a)
{
if (a *a > n)
{
return (-1);
}
if (a *a == n)
{
return (a);
}
return (resultado(n, a + 1));
}
