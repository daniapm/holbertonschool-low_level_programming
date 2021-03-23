#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * free_listint- Entry Point
 * @head: variable
 * Return: 0
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
	current = head;
head = head->next;
free(current);

}
}
