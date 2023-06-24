#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i, check = 1;
	hash_node_t *nodde = NULL;
	char *k, *v;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		nodde = ht->array[i];
		while (nodde)
		{
			if (!check)
				printf(", ");
			k = strdup(nodde->key);
			v = strdup(nodde->value);
			printf("'%s': '%s'", k, v);
			check = 0;
			nodde = nodde->next;
		}
	}
	printf("}\n");
}
