#include "holberton.h"


/**
 * *leet - leet 1337
 * @s: variable
 * main - Return
 * Return: void
 */

char *leet(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == 97 || s[i] == 65)
{
s[i] = 52;
}
else if (s[i] == 69 || s[i] == 101)
{
s[i] = 51;
}
else if (s[i] == 79 || s[i] == 111)
{
s[i] = 48;
}
else if (s[i] == 84 || s[i] == 116)
{
s[i] = 55;
}
else if (s[i] == 76 || s[i] == 108)
{
s[i] = 49;
}
i++;
}
return (s);
}
