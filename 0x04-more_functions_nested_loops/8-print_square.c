#include "holberton.h"

/**
 * print_square - checks isdigit
 * @size: variable
 * main - Return
 * Description: print square
 * Return: 0
 */
void print_square(int size)
{
int contador, repeticion;
for (contador = 0; contador < size; contador++)
{
for (repeticion = 0; repeticion < size; repeticion++)
{
_putchar (35);
}
if (contador != size - 1)
{
_putchar (10);
}
}
_putchar (10);
return;
}
