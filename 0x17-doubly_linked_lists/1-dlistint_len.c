#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - Entry Point
 * @h: variable
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t i;

	i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
