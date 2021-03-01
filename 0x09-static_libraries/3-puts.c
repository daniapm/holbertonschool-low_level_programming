#include "holberton.h"

/**
 * _puts - Write a function that prints a string, to stdout.
 * @str: variable
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar (10);
}
