#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numero1, numero2, numero3;
for (numero1 = 48; numero1 <= 57; numero1++)
{
for (numero2 = 49; numero2 <= 57; numero2++)
{
for (numero3 = 50; numero3 <= 57; numero3++)
{
putchar(numero1);
putchar(numero2);
putchar(numero3);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
