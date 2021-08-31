#include "search_algos.h"
#include <math.h>
size_t min(size_t num1, size_t num2);
/**
 * jump_search -  searches for a valueusing the Jump search algorithm
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t m = sqrt(size);

	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += m;
		if (i >= size)
			break;
	}
	i = i - m;
	printf("Value found between indexes [%ld] and [%ld]\n", i, (i + m));
	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
