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
	hash_node_t *hash_node;

	count = key_index((const unsigned char *)key, ht->size);
	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	hash_node = create_items(key, value);
	if (hash_node == NULL)
	{
		return (0);
	}
	if (ht->array[count] != NULL)
	{
		while (ht->array[count] != NULL)
		{
			if (strcmp(ht->array[count]->key, key) == 0)
			{
				break;
			}
			ht->array[count] = ht->array[count]->next;
		}
		if (ht->array[count] == NULL)
		{
			hash_node->next = ht->array[count];
			ht->array[count] = hash_node;
		}
		else
		{
			free(ht->array[count]->value);
			ht->array[count]->value = strdup(value);
		}

	}
	else
	{
		hash_node->next = NULL;
		ht->array[count] = hash_node;
	}
	return (0);
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
