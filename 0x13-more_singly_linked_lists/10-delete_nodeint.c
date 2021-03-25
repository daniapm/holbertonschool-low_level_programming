#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * delete_nodeint_at_index - Entry Point
 * @head: variable
 * @index: variable
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

unsigned int contador = 1;
	listint_t *node, *new;

	if (*head == NULL)
	{
		return (-1);
	}
	node = *head;
	if (index == 0)
	{
		new = node->next;
		*head = new;
		free(node);
		return (1);
	}
	while (node)
	{
		if (contador == index)
		{
			new = node->next;
			node->next = new->next;
			free(new);
			return (1);
		}
		node = node->next;
		contador++;
	}
	return (-1);

}
