#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, aux_com = 0;
	hash_node_t *list = NULL;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		list = ht->array[i];
		while (list != NULL)
		{
			if (aux_com > 0)
				printf(", ");
			printf("'%s': '%s'", list->key, list->value);
			aux_com++;
			list = list->next;
		}
	}
	printf("}\n");
}
