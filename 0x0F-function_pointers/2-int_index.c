#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Entry Point
 * @array: variable
 * @size: variable
 * @cmp: variable
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != '\0' && cmp != '\0')
	{
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}
	return (-1);
}
