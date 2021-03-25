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

unsigned int ctr = 0;
	listint_t *temp_h, *temp_node;

	if (!*head)
		return (-1);
	temp_h = *head;
	if (index == 0)
	{
		temp_node = temp_h->next;
		*head = temp_node;
		free(temp_h);
		return (1);
	}
	while (temp_h)
	{
		if (ctr ++ 1 == index)
		{
			temp_node = temp_h->next;
			temp_h->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		temp_h = temp_h->next;
		ctr++;
	}
	return (-1);
}
