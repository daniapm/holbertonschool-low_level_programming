#include "holberton.h"
#include <string.h>

/**
 * *rot13 - Segmentation
 * @s: variable
 * main - Return
 * Return: void
 */
char *rot13(char *s)
{
char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char root[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;
i = 0;
j = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; j < 52; j++)
{
if (abc[j] == s[i])
{
s[i] = root[j];
break;
}
}
}
return (s);
}
