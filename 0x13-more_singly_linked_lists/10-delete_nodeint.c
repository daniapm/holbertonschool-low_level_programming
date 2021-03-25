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

unsigned int ctr = 1;
	listint_t *temp_h, *new;

	if (*head == NULL)
	{
		return (-1);
	}
	temp_h = *head;
	if (index == 0)
	{
		new = temp_h->next;
		*head = new;
		free(temp_h);
		return (1);
	}
	while (temp_h)
	{
		if (ctr == index)
		{
			new = temp_h->next;
			temp_h->next = new->next;
			free(new);
			return (1);
		}
		temp_h = temp_h->next;
		ctr++;
	}
	return (-1);
}
