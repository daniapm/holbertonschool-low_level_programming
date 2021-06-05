#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: key
 * @value: value asociated with the key
 * @ht: hash table you want to add
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int count;
	hash_node_t *has_new = NULL;
	hash_node_t *new_node = NULL;
	char *new_value;

	if (ht == NULL)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	count = key_index((unsigned char *)key, ht->size);

	has_new = ht->array[count];
	while (has_new)
	{
		if (strcmp(has_new->key, key) == 0)
		{
			free(has_new->value);
			has_new->value = new_value;
			has_new->value = strdup(value);
			free(new_value);
			return (1);
		}
		has_new = has_new->next;
	}
	new_node = create_items(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[count];
	ht->array[count] = new_node;
	return (1);
}

/**
 * create_items - function that adds an element to the hash table.
 * @key: key
 * @value: value asociated with the key
 * Return: new item
 */

hash_node_t *create_items(const char *key, const char *value)
{

	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);

	item->key = (char *)malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (NULL);
	item->value = (char *)malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
