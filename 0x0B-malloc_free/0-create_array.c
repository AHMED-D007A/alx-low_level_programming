#include <stdio.h>
#include <stdlib.h>
/**
*create_array - a function that creates an array of chars
*@size: the size of the array
*@c:initializes it with a specific char
*Return: Null if size = 0 , and Null if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(*p));
	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
