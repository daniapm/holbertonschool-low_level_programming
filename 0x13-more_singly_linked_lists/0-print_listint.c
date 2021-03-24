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

	i = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
