#include "holberton.h"

/**
 * _strlen_recursion - long to string
 * @s: variable
 * main - Return
 * Return: void
 */
int _strlen_recursion(char *s)
{
if (s[0] == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

