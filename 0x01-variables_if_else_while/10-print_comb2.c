#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numero1, numero2;
for (numero1 = 48; numero1 <= 57; numero1++)
{
for (numero2 = 48; numero2 <= 57; numero2++)
{

putchar(numero1);
putchar(numero2);
if (!(numero1 == 57 && numero2 == 57))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
