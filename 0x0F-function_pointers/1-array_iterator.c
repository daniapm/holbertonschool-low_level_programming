#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry Point
 * @array: variable
 * @size: variable
 * @action: variable
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != '\0' && action != '\0')
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
