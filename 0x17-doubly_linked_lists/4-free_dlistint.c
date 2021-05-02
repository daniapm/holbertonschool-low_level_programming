#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * free_dlistint- Entry Point
 * @head: variable
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head != NULL)
{
	current = head;
current = head->next;
free(head);
head = current;

}
}
