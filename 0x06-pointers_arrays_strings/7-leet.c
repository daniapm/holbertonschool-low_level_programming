#include "holberton.h"


/**
 * *leet - leet 1337
 * @s: variable
 * main - Return
 * Return: void
 */

char *leet(char *s)
{
int i, j;
char letras[] = "aAeEoOtTlL";
char numeros[] = "4433007711";

for (i = 0; s[i]; i++)
{
for (j = 0; j <= 9; j++)
{
if (letras[j] == s[i])
{
s[i] = numeros[j];
}
}
}
return (s);
}
