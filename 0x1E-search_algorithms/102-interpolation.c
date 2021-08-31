#include "search_algos.h"

/**
 * interpolation_search - function that searches Interpolation search algorithm
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while (array[high] != array[low] && value >= array[low]
	       && value <= array[high])
	{
		mid = low + ((value - array[low]) *
		(high - low) / (array[high] - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (value == array[low])
		return (low);
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
	}
}
