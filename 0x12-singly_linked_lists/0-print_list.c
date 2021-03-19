#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * print_list- Entry Point
 * @h: variable
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *nodo;
	unsigned int i;

	nodo = h;
	i = 0;
	while (nodo)
	{
		printf("[%u] %s\n", nodo->len, nodo->str);
		nodo = nodo->next;
		i++;

	}
	return (i);
}
