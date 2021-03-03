#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate string
 * @s1: variable
 * @s2: variable
 * main - Return
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *result;

	i = 0;
	j = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	result = malloc(sizeof(s1) + sizeof(s2) * 100);
	if (result == '\0')
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
result [i + j] = '\0';
return (result);
}
