#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - Entry Point
 * @h: variable
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *nodo;
	size_t i;

	i = 0;
	nodo = h;

	while (nodo != NULL)
	{
	printf("%d\n", nodo->n);
	nodo = nodo->next;
	i++;
	}
	return (i);
}
