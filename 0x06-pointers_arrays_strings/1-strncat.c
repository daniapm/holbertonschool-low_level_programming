#include "holberton.h"


/**
 * *_strncat - concatenates two strings.
 * @dest: variable
 * @src: variable
 * @n: variable
 * main - Return
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != 0)
{
i++;
}
while (src[j] && j < n)
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
