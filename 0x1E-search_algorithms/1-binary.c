#include "search_algos.h"

/**
 * binary_search - function that searches using the Binary search algorithm
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int binary_search(int *array, size_t size, int value)
{
int start, end, i, mid;
start = 0;
end = size - 1;

if (array == NULL)
	return (-1);

while (start <= end)
{
	mid = (start + end) / 2;

	printf("Searching in array: ");

	for (i = start; i <= end; ++i)
	{
		if (i != start)
			printf(", %d", array[i]);
		else
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
