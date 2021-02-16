#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string, to stdout.
 * @str: variable
 * Return: void
 */
void _puts(char *str)
{
int i;
int len;
len = 0;
while (str[len] != 0)
{
len++;
}
for (i = 0; i <= len; i++)
{
_putchar (str[i]);
}
_putchar ('\n');
}
