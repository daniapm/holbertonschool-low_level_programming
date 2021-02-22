#include "holberton.h"


/**
 * *_strchr -  locates a character in a string.
 * @s: variable
 * @c: variable
 * main - Return
 * Return: void
 */
char *_strchr(char *s, char c)
{
int contador;
contador = 0;
while (s[contador] != '\0')
{
if (s[contador] == c)
{
return (&s[contador]);
}
contador++;
}
return ('\0');
}
