#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _longitud(char *s);

/**
 * *argstostr - entry point
 * @ac: variable
 * @av: variable
 *
 * Return: 0 for succesful exit
 */

char *argstostr(int ac, char **av)
{
	int cont1, cont2, cont3 = 0, longit = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (cont1 = 0; cont1 < ac; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2]; cont2++)
			longit++;
	}
	longit += ac;

	concat = malloc(sizeof(char) * longit + 1);
	if (concat == NULL)
		return (NULL);

	for (cont1 = 0; cont1 < ac; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2]; cont2++)
		{
			concat[cont3] = av[cont1][cont2];
			cont3++;
		}
		if (concat[cont3] == '\0')
		{
			concat[cont3++] = '\n';
		}
	}
	return (concat);
}
