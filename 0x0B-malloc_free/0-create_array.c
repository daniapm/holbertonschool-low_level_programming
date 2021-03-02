#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - array of chars
 * @size: variable
 * @c: variable
 *
 * Return: 0 for succesful exit
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	a = malloc(size * sizeof(*a));
	for (i = 0; i < size; i++)
	{
	a[i] = c;
	}
	}
	if (a == '\0')
	{
	return (NULL);
	}
return (a);
}
