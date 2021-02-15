#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - rever
 * @s: variable
 * main - Return
 * Return: void
 */
void print_rev(char *s)
{
int size;
int i;
size = strlen(s);
for (i = size; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
return;
}
