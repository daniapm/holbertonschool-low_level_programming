#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *array_p, *new_array;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		array_p = ht->array[i];
		if (array_p != NULL)
		{
			new_array = NULL;
			while (array_p != NULL)
			{
				new_array = array_p->next;
				free(array_p->next);
				free(array_p->key);
				free(array_p->value);
				free(array_p);
				array_p = new_array;
			}
			free(array_p);
		}
	}
	free(ht->array);
	free(ht);
}
