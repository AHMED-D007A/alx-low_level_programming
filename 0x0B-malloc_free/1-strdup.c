#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - a function that returns a pointer to a newly allocated space in mem
*@str: the string
*Return: NULL if str = NULL It returns NULL if insufficient memory was availab
*/
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
