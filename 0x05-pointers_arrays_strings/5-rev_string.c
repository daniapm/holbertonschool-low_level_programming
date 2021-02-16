#include "holberton.h"
#include <string.h>

/**
 * rev_string - rever
 * @s: variable
 * main - Return
 * Return: void
 */
void rev_string(char *s)
{
int size;
int i;
int contador = 0;
for (i = size; i >= 0; i--)
{
char rever[size];
rever[contador] = s[i];
contador++;
}
s = rever;
return;
}
