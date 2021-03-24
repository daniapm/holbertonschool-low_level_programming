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
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
