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
	if (nodo->str == NULL)
		{
	printf("[%d] %s\n", 0, "(nill)");
		}
		else
		{
	printf("[%d] %s\n", nodo->len, nodo->str);
		}
		nodo = nodo->next;
	i++;
	}
	return (i);
}
