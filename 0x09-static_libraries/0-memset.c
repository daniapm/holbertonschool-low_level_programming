#include "holberton.h"


/**
 * *_memset - concatenates two strings.
 * @s: variable
 * @b: variable
 * @n: variable
 * main - Return
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int contador;

for (contador = 0; contador < n; contador++)
{
s[contador] = b;
}
return (s);
}
