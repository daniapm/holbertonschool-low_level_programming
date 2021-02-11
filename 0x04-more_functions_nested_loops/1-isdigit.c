#include "holberton.h"

/**
 * _isdigit - checks isdigit
 * @c: character
 * main - Return
 * Description: isdigit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
