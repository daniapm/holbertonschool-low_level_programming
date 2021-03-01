#include "holberton.h"


/**
 * *_memcpy - copies memory area.
 * @dest: variable
 * @src: variable
 * @n: variable
 * main - Return
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int contador;
char *csrc = (char *)src;
char *cdest = (char *)dest;

for (contador = 0; contador < n; contador++)
{
cdest[contador] = csrc[contador];
}
return (dest);
}
