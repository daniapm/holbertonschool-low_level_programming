#include "holberton.h"


/**
 * more_numbers - prints number 0 to 14.
 * main - Return
 * Return: void
 */
void more_numbers(void)
{
int contador, numeros;
for (contador = 1; contador <= 10; contador++)
{
for (numeros = 0; numeros <= 14; numeros++)
{
if (numeros >= 10)
{
_putchar (numeros / 10 + '0');
}
_putchar (numeros % 10 + '0');
}
_putchar (10);
}
return;
}
