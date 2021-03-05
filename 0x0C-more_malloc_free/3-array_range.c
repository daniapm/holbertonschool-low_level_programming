#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int largo(char *s);

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
	a = malloc(sizeof(int) * (min + max) - 1);
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

/**
 * largo - largo
 * @s: variable
 * main - Return
 * Return: void
 *
 */

int largo(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
