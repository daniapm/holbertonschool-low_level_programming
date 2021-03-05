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
	int *a, i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min) + 1);
	if (a == '\0')
	{
		return (NULL);
	}
	else
	{
		for (i = min; i < max; i++)
		{
			a[i] = min;
			min++;
		}
	}
	return (a);
}
