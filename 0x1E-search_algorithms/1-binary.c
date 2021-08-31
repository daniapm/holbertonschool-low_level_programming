#include "search_algos.h"

/**
 * linear_searc - function that searches for a value using the Linear search algorithm
 * @size: variable
 * @array:  is a pointer to the first element
 * @value: he value to search for
 * Return: new table
 */

int binary_search(int *array, size_t size, int value)
{
int start = 0;
int end = size - 1;
while(start <= end)
{
	int mid = (start + end) / 2;
	printf("Searching in array: ");
	for (int i = start; i <= end; i++)
	{
		if (array[i] != end)
		{
			printf("%d, ", array[i]);
		}
		else 
			printf("%d", array[i]);
	}
	printf("\n");
    if(array[mid] == value)
	{
        return mid;
	}
    else if(array[mid]<value)    
        start = mid + 1;
    else    
        end = mid - 1;
}
    return -1;
}
