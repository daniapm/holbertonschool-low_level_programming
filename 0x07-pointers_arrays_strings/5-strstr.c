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
char *inicio;
for (inicio = haystack; *inicio != '\0'; inicio++)
{
char *p = needle;
char *q = inicio;
while (*p != '\0' && *q != '\0' && *p == *q)
{
p++;
q++;
}
if (*p == '\0')
{
return (inicio);
}
}
return (NULL);
}
