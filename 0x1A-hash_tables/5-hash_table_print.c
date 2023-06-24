#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *nodde = NULL;
	char *k, *v;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			nodde = ht->array[i];
			k = strdup(nodde->key);
			v = strdup(nodde->value);
			printf("'%s': '%s'", k, v);
			if (!(ht->array[i]))
				printf(", ");
		}
	}
	printf("}\n");
}
