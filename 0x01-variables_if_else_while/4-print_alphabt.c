#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letraInicial;
for (letraInicial = 97; letraInicial <= 122; letraInicial++)
{
if (!(letraInicial == 101 || letraInicial == 113))
{
putchar(letraInicial);
}
}
putchar('\n');
return (0);
}
