#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the given table.
 * @key: the given key to add or to update it.
 * @value: the value of the given key.
 * Return: 1 on success, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *nodde = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	nodde = ht->array[indx];

	while (nodde)
	{
		if (nodde == NULL)
		{
			nodde = malloc(sizeof(hash_node_t));
		}
		if (strcmp(key, nodde->key))
		{
			if (nodde->value == NULL)
				return (0);
			nodde->value = (char *)value;
			return (1);
		}
		else
		{
			nodde = nodde->next;
			if (nodde == NULL)
			{
				nodde = malloc(sizeof(hash_node_t));
			}
		}
		nodde->key = (char *)key;
		nodde->value = (char *)value;
	}

	return (1);
}
