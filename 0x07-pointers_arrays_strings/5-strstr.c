#include "holberton.h"


/**
 * *_strstr - gets the length of a prefix substring.
 * @haystack: variable
 * @needle: variable
 * main - Return
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
int contador;
contador = 0;
while (haystack[contador] != '\0')
{
if (*(needle) == *(haystack + contador))
{
return (&haystack[contador]);
}
contador++;
}
return (NULL);
}
