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

		a = malloc(nmemb * size);
		if (a == '\0')
		{
			return (NULL);
		}
		else 
		{
		for (i = 0; i < size; i++)
		{
			a[i] = nmemb;
		}
		}
	return (a);
}
