#include "hash_tables.h"
/**
 * hash_table_create - create a hash table with the given size.
 * @size: the size of the hash tabls.
 * Return: a hash table or NULL on failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t hs;
	unsigned long int l;

	if (size == 0)
		return (NULL);

	hs = malloc(sizeof(hash_table_t));

	if (hs == NULL)
		return (NULL);

	hs->array = malloc(sizeof(hash_node_t *) * size);

	if (hs->array == NULL)
	{
		free(hs);
		return (NULL);
	}
	hs->size = size;

	for (l = 0; l < size; l++)
	{
		hs->array[l] = NULL;
	}

	return (hs);
}
