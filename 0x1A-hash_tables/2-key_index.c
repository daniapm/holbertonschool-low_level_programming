#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key..
 * @key: key
 * @size: size of the array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned int hash_val = 0;
	unsigned int i = 0;

	while (key && key[i])
	{
		hash_val += key[i] % size;
		i++;
	}
	return (hash_val);
}
