#include "holberton.h"


/**
 * print_most_numbers - prints the numbers
 * main - Return
 * Return: void
 */
void print_most_numbers(void)
{
int numeros;
for (numeros = 48; numeros <= 57; numeros++)
{
if (numeros != 50 && numeros != 52)
{
_putchar (numeros);
}
}
_putchar (10);
return;
}
