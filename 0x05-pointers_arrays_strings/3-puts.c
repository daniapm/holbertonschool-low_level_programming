#include "holberton.h"


/**
 * _puts - Write a function that prints a string.
 * @str: variable
 * main - Return
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
_putchar (str [i]);
}
_putchar (10);
return;
}
