#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - copy
 * @str: variable
 *
 * Return: 0 for succesful exit
 */

char *_strdup(char *str)
{
	int i, l;
	char *copy;

	l = 0;

	if (str  == '\0')
	{
		return (NULL);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	copy = malloc(sizeof(*str) * l + 1);
	if (copy == '\0')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	copy[i] = str[i];
	}
	return (copy);
}
