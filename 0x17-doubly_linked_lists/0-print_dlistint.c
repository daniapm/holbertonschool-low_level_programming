#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Entry Point
 * @h: variable head
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t i;

	i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
