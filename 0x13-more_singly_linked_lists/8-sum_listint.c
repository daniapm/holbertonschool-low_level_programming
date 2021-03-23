#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * sum_listint - Entry Point
 * @head: variable
 * Return: 0
 */

int sum_listint(listint_t *head)
{

 int suma = 0;
 while(head != NULL)
 {
	suma += head->n;
 head = head->next;
 }
 return (suma);
}
