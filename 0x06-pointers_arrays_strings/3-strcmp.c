#include "holberton.h"


/**
 * _strcmp - compares
 * @s1: variable
 * @s2: variable
 * main - Return
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
int i;
if (s1 == s2)
{
i = 0;
}
else if (s1 > s2)
{
i = *s1 - *s2;
}
else
{
i = *s1 - *s2;
}
return (i);
}
