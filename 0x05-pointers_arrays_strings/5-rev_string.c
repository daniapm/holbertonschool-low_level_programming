#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - rever
 * @s: variable
 * main - Return
 * Return: void
 */
void rev_string(char *s);
{
int size;
int i;
size = strlen(s);
for (i = size; i >= 0; i--)
{
s = (s[i]);
_putchar (s);
}
return;
}
