#include "holberton.h"

/**
 * print_alphabet_x10 - checks for lowercase letters
 *
 * main - Return
 *
 * Return: 0 or 1
 */
void print_alphabet_x10(void)
{
int letras, repeticion;
for (repeticion = 1; repeticion <= 10; repeticion++)
{
for (letras = 97; letras <= 122; letras++)
{
_putchar(letras);
}
_putchar(10);
}
return;
}
