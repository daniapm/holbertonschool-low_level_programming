#include <stdio.h>

/**
 * fizz_buzz - print fizz buzz
 *
 * main - Return
 *
 * Return: 0
 */
int main (void)
{
int numeros;
for (numeros = 1; numeros <= 100; numeros++)
{
if (numeros % 3 == 0)
{
printf ("Fizz");
}
if (numeros % 5 ==0)
{
printf ("Buzz");
}
if (numeros % 3 != 0 && numeros % 5 != 0)
{
printf ("%d", numeros);
}
putchar (32);
}
putchar (10);
return (0);
}
