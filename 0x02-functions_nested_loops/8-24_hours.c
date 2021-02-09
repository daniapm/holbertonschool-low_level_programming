#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
int hora, hora1, hora2, hora3;
for (hora = 48; hora <= 50; hora++)
{
for (hora1 = 48; hora1 <= 57; hora1++)
{
for (hora2 = 48; hora2 <= 53; hora2++)
{
for (hora3 = 48; hora3 <= 57; hora3++)
{
if (!(hora == 50 && hora1 > 51))
{
_putchar (hora);
_putchar (hora1);
_putchar (58);
_putchar (hora2);
_putchar (hora3);
_putchar ('\n');
}
}
}
}
}
return;
}
