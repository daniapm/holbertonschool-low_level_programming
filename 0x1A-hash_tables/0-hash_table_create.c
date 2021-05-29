#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: variable
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	if (size < 1)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return (table);
}
