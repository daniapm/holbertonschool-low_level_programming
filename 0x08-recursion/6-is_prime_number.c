#include "holberton.h"
int primo(int n, int i);


/**
 * is_prime_number - prime number
 * @n: variable
 * main - Return
 * Return: void
 */
int is_prime_number(int n)
{
int i;
if (n < 2)
{
return (0);
}
i = primo(n, n / 2);
return (i);
}

/**
 * primo - print to strings.
 * @n: variable
 * @i: variable
 * main - Return
 * Return: void
 */

int primo(int n, int i)
{
int divisor;
divisor = i;
if (divisor == 1)
{
return (1);
}
else if (n % divisor == 0)
{
return (0);
}
return (primo(n, divisor - 1));
}
