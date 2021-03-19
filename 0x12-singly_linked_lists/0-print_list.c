#include <stdio.h>
#include "lists.h"

/**
 * print_list- Entry Point
 * @h: variable
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *nodo;
	size_t i;

	i = 0;
	nodo = h;
	while (nodo != NULL)
	{
	printf("[%d] %s\n", nodo->len, nodo->str);
	nodo = nodo->next;
	i++;
	}
	return (i);
}
