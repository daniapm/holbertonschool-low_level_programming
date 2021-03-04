#include "holberton.h"
#include <stdlib.h>

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

	if (size == 0 || nmemb != 0)
	{
		a = malloc(0);
		return(a);
	}
	else
	{
		a = (char*)calloc(size, sizeof(unsigned int));
		if (a == '\0')
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			a[i] = nmemb;
		}
	}
	return (a);
}
