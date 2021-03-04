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

	char *concatenar;
	int contador1, contador2, len, i, contador3;

	contador3 = 0;
	i = 0;


	if (ac == 0 || av == NULL)
	return (NULL);
		len = 1;
		i = 0;
		while (i < ac)
		{
			len += _longitud(av[i]) + 1;
			i++;
		}

		concatenar = malloc(sizeof(char) * len + 1);
		if (concatenar == NULL)
			return (NULL);

		for (contador1 = 0; contador1 < ac; contador1++)
		{
			for (contador2 = 0; av[contador1][contador2]; contador2++)
			{
				concatenar[contador3] = av[contador1][contador2];
				contador3++;
			}
			if (concatenar[contador3] == '\0')
			{
				concatenar[contador3++] = '\n';
			}
		}
		return (concatenar);
}

/**
 * _longitud - largue
 * @s: variable
 * Return: 0 for succesful exit
 *
 */
int _longitud(char *s)
{
	int i;

		i = 0;
		while (s[i] != '\0')
			i++;
		return (i);

}
