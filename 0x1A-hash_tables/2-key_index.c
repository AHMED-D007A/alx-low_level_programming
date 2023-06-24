#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key of the element in the array of hash table
 * @size: the size of the array of the hash table.
 * Return: the index of the given key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}