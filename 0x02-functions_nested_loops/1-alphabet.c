#include "holberton.h"


/**
 * print_alphabet - prints every minute of the day
 * main - Return
 * Return: void
 */
void print_alphabet(void)
{
int letras;
for (letras = 97; letras <= 122; letras++)
{
_putchar(letras);
}
_putchar('\n');
return;
}

