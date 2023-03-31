#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*list_len - a function that returns the number of elements in a linked list_t.
*@h: a pointer to the list
*Return: the number of element in the function
*/
size_t list_len(const list_t *h)
{
	int cownter = 0;

	while (h)
	{
		cownter++;
		h = h->next;
	}

	return (cownter);
}
