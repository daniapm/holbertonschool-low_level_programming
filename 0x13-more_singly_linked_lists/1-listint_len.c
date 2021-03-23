#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry Point
 * @h: variable
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
const listint_t *nodo;
	size_t i;

	i = 0;
	nodo = h;

	while (nodo != NULL)
	{
	nodo = nodo->next;
	i++;
	}
	return (i);
}
