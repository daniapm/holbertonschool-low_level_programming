#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
