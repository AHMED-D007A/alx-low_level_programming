#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key:the key you are looking for.
 * Return: the val of the element or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *nodde = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	nodde = ht->array[indx];

	if (nodde == NULL)
		return (NULL);

	if (!strcmp(key, nodde->key))
	{
	if (nodde->value == NULL)
		return (NULL);
	return (nodde->value);
	}

	else
		nodde = nodde->next;

	return (nodde->value);
}
