#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
int _strlen(char *str);


/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: variable
 * @str: variable
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nuevo_nodo;

nuevo_nodo = malloc(sizeof(list_t));
	if (nuevo_nodo == NULL)
	{
		return (NULL);
	}
	else
	{
nuevo_nodo->str = strdup(str);
	if (nuevo_nodo->str == NULL)
	{
		return (NULL);
	}
nuevo_nodo->len = _strlen(nuevo_nodo->str);
		nuevo_nodo->next = *head;
	*head = nuevo_nodo;
	}
return (nuevo_nodo);
}

/**
 * _strlen - adds a new node at the beginning of a list_t list.
 * @str: variable
 * Return: 0
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
