#include "holberton.h"
#include <stdio.h>

/**
 * times_table - prints every minute of the day
 *
 * Return: void
 */
void times_table(void)
{
int numero, tabla, resultado, comodin;
for (numero = 0; numero <= 9; numero++)
{
for (tabla = 0; tabla <= 9; tabla++)
{
resultado = numero * tabla;
comodin = numero * (tabla + 1);
if (resultado < 10)
{
_putchar (resultado + '0');
}
else
{
_putchar (resultado / 10 + '0');
_putchar (resultado % 10 + '0');
}
if (tabla != 9)
{
if (resultado <= 9 && comodin < 10)
{
_putchar (44);
_putchar (32);
_putchar (32);
}
else
{
_putchar (44);
_putchar (32);
}
}
}
_putchar (10);
}
return;
}
