#include "hash_tables.h"

/**
 * hash_table_get - function that gives you the index of a key.
 * @key: key
 * @ht: hash table you want to look into
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	unsigned int i = key_index((unsigned char *)key, ht->size);
	hash_node_t *entry = ht->array[i];

	if (entry == NULL)
	{
		return (NULL);
	}
	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}
		entry = entry->next;
	}
	return (NULL);
}
