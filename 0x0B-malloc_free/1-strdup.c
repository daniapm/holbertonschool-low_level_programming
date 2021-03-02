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
	int i;
	char *copy;
	if (str  == '\0')
	{
		return (NULL);
	}
	copy = malloc(sizeof(*str) + 1);
	if (copy == '\0')
	{
		return (NULL);
	}
	else
	{
	for (i = 0; str[i] != '\0'; i++)
	{		
	copy[i] = str[i];
	}
	}
	return (copy);
}
