#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the size of the memory
 * Return: concatinated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = malloc(n * sizeof(char) + 1 + sizeof(s1));
	unsigned int l, i;

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (l = 0 ; l < n; l++)
		ptr[++i] = s2[l];
	ptr[i] = '\0';

	return (ptr);
}
