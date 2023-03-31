#include "lists.h"
#include <string.h>
/**
*add_node - a function that adds a new node at the beginning of a list_t list.
*@head: a pointer to the first node of list_t
*@str: a pointer to the new element
*Return: the new element.
*/
list_t *add_node(list **head, const char *str)
{
	list_t *n;

	if (!head)
		return (NULL);

	n = calloc(1, sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	if (!n->str)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(str);
	n->next = *head;
	*head = n;

	return (n);
}
