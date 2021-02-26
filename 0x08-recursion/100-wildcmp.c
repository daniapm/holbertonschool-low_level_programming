#include "holberton.h"

/**
 * wildcmp - long to string
 * @s1: variable
 * @s2: variable
 * main - Return
 * Return: void
 */
int wildcmp(char *s1, char *s2)
{
if ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
