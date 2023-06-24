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
NEW:
		if (nodde == NULL)
		{
			nodde = malloc(sizeof(hash_node_t));
			if (nodde == NULL)
				return (0);
			nodde->key = malloc(sizeof(char));
			nodde->value = malloc(sizeof(char));
			nodde->key = strdup(key);
			nodde->value = strdup(value);
			nodde->next = ht->array[indx] ? ht->array[indx] : NULL;
			ht->array[indx] = nodde;
			return (1);
		}
CMP:
		if (!strcmp(key, nodde->key))
		{
			if (nodde->value == NULL)
				return (0);
			free(nodde->value);
			nodde->value = strdup(value);
			return (1);
		}
		else
		{
			nodde = nodde->next;
			while (nodde != NULL)
				goto CMP;
			goto NEW;
		}

	return (1);
}
