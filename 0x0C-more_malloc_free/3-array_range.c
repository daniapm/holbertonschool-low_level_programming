#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *array_range - allocates memory
 * @min: variable
 * @max: variable
 *
 * Return: 0 for succesful exit
 */

int *array_range(int min, int max)
{
	int *a, i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min + 1);
		a = malloc(sizeof(int) * len);
	if (a == '\0')
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			a[i] = min++;
		}
	}
	return (a);
}
