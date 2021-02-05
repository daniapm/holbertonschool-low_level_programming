#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numeros, letras;
for (numeros = 48; numeros <= 57; numeros++)
{
putchar(numeros);
}
for (letras = 97; letras <= 102; letras++)
{
putchar(letras);
}
putchar('\n');
return (0);
}
