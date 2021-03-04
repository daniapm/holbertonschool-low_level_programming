#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int largo(char *s);

/**
 * *string_nconcat - concatenate string
 * @s1: variable
 * @s2: variable
 * @n: variable
 * main - Return
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int largo1, largo2, i, j;
	char *result;

	i = 0;
	j = 0;
	largo1 = largo(s1);
	largo2 = largo(s2);

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	if (n >= largo2)
	{
		result = malloc(largo1 + largo2 + 1 * sizeof(char));
	if (result == '\0')
	{
		return (0);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(result + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(result + i + j) = *(s2 + j);
	}
	}
	else if (n < largo2)
	{
		result = malloc(largo1 + n + 1 * sizeof(char));
			if (result == '\0')
			{
				return (0);
			}
			for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(result + i) = *(s1 + i);
		}
		for (j = 0; s2[j] && j < n; j++)
		{
			*(result + i + j) = *(s2 + j);
		}
	}
	result[i + j] = '\0';
	return (result);
}

/**
 * largo - largo
 * @s: variable
 * main - Return
 * Return: void
 *
 */
	int largo(char *s)
	{
		int i;

		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
	}
