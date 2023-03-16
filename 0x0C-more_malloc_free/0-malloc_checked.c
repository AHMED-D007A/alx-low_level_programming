#include <stdlib.h>
/**
*malloc_checked - a function that allocates memory using malloc.
*@b: the size of the memory
*Return: return the pointer that point to the heap
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
