#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
		return (NULL);
	matriz = malloc(sizeof(int *) * height);
	if (matriz == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);
		if (matriz[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(matriz[i]);
			free(matriz);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matriz[i][j] = 0;
	return (matriz);
}
