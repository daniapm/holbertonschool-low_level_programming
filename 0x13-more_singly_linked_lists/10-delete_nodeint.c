#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * *insert_nodeint_at_index - Entry Point
 * @head: variable
 * @idx: variable
 * @n: variable
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *temp, sig;
unsigned int i;
    if (index == 0)
    {
    temp = (*(head))->next;
        free(temp);
    }
    for (i = 0; temp != NULL && i < index - 1; i++)
         temp = temp->next;
    if (temp == NULL || temp->next == NULL)
         return(-1);
 	sig = *temp->next->next;
    free(temp->next);

    *temp->next = sig;
return (1);
}
