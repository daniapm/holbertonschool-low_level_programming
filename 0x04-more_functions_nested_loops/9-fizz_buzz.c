#include <stdio.h>

/**
 * main - print fizz buzz
 *
 * Return: 0
 */
int main(void)
{
int numeros;
for (numeros = 1; numeros <= 100; numeros++)
{
if (numeros % 3 == 0)
{
printf("Fizz");
}
if (numeros % 5 == 0)
{
printf("Buzz");
}
if (numeros % 3 != 0 && numeros % 5 != 0)
{
printf("%d", numeros);
}
if (numeros != 100)
{
putchar (32);
}
}
putchar (10);
return (0);
}
