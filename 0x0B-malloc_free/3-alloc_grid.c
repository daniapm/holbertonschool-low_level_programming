#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - concatenate string
 * @width: variable
 * @height: variable
 * main - Return
 * Return: void
 */

int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	matriz = malloc(sizeof(int *) * height);
	if (matriz == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		matriz[i][j] = 0;
		}
	}

return (matriz);
free(matriz);
}
