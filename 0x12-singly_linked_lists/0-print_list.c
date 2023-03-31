#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_list - a function that prints all the elements of a list_t list.
*@h: a pointer to the list_t
*Return: the number of nodes in list_t
*/
size_t print_list(const list_t *h)
{
	int cownt = 0;

	while (h)
	{
		printf("[%d] %s\n",
				h->str ? h->len : 0,
				h->str ? h->str : "(nil)");
		h = h->next;
		cownt++;
	}

	return (cownt);
}
