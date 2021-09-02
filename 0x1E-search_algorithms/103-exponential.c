#include "search_algos.h"
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

/**
 * exponential_search - function Binary search algorithm
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */


int exponential_search(int *array, size_t size, int value)
{
	if (array[0] == value)
		return (0);

	size_t i = 1;
	size_t j = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		j = i;
		i = i * 2;

	}
	printf("Value found between indexes[%ld] = [%ld]\n", j, i - 1);
	return (binary_searcht(array, i / 2, MIN(i, size), value));
}

/**
 * binary_searcht - function Binary search algorithm
 * @start: variable
 * @end: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int binary_searcht(int *array, size_t start, size_t end, int value)
{
int mid;
size_t i;

if (array == NULL)
	return (-1);

while (start <= end)
{
	mid = (start + end) / 2;

	printf("Searching in array: ");

	for (i = start; i < end; ++i)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
		start = mid + 1;
	else
		end = mid - 1;
}
	return (-1);
}
