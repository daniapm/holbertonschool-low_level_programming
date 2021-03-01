#include "holberton.h"

/**
 * *_strcpy - rever
 * @dest: variable
 * @src: variable
 * main - Return
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
char *puntero = dest;
while (*src != '\0')
{
*puntero = *src;
puntero++;
src++;
}
*puntero = '\0';
return (dest);
}
