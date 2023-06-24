#include "hash_tables.h"

/**
 * rm_next_nodde - free the linked noddes in every hash.
 * @nodde:the head of the list.
*/
void rm_next_nodde(hash_node_t *nodde)
{
	if (nodde->next)
	{
		rm_next_nodde(nodde->next);
	}
	free(nodde->key);
	free(nodde->value);
	free(nodde);
}

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodde;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		nodde = ht->array[i];
		if (nodde)
		{
			rm_next_nodde(nodde);
		}
	}
	free(ht->array);
	free(ht);
}
