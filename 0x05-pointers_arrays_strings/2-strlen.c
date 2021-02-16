#include "holberton.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable
 * main - Return
 * Return: always 0
 */
int _strlen(char *s)
{
int len;
len = 0;
while (s[len] != 0)
{
len++;
}
return (len);
}
