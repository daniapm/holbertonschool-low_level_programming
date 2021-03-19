#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * list_len- Entry Point
 * @h: variable
 * Return: 0
 */

size_t list_len(const list_t *h)
{
const list_t *nodo;
	unsigned int i;

	nodo = h;
	i = 0;

	while (nodo)
	{
		nodo = nodo->next;
		i++;

	}
	return (i);
}
