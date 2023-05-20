#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in the list.
 * @h: the head pointer in doubly linked list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	while (temp && temp->prev)
		temp = temp->prev;

	for (count = 0; temp; count++, temp = temp->next)
		printf("%d\n", temp->n);

	return (count);
}
