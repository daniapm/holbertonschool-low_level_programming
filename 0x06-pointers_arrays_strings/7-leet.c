#include "holberton.h"


/**
 * *leet - leet 1337
 * @s: variable
 * main - Return
 * Return: void
 */

char *leet(char *s)
{
int contador1, contador2;
char letras[] = "aAeEoOtTlL";
char numeros[] = "4433007711";

for (contador1 = 0; s[contador1]; contador1++)
{
for (contador2 = 0; contador2 <= 9; contador2++)
{
if (letras[contador2] == s[contador1])
{
s[contador1] = numeros[contador2];
}
}
}
return (s);
}
