#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>
unsigned int _starlen(const char *s);


/**
 * binary_to_uint - Entry Point
 * @b: variable
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
int c;
unsigned int len;

if (b == NULL)
return (0);

len = _starlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' || b[c] != '1')
{
	return (0);
}
if (b[c] == '1')
	{
	i += k;
	}
	k *= 2;
	}
return (i);
}

/**
 * _starlen - Entry Point
 * @s: variable
 * Return: 0
 */
unsigned int _starlen(const char *s)
{
int i;

i = 0;

while (*s)
{
	s++;
	i++;
}
return (i);
}
