#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - allocates memory
 * @size: variable
 * @nmemb: variable
 *
 * Return: 0 for succesful exit
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
		a = malloc(nmemb * size);
		if (a == '\0')
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (nmemb * size); i++)
		{
			a[i] = 0;
		}
		}
	return (a);
}
