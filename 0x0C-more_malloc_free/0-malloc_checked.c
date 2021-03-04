#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - entry point
 * @b: variable
 *
 * Return: 0 for succesful exit
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *check;

	check = (void *)malloc(b);
	if (check == '\0')
	{
		exit(98);
	}
	return (check);
}
