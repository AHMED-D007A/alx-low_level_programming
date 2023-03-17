#include <stdlib.h>
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the size of the memory
 * Return: concatinated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l, i, h;


	ptr = malloc((n + h + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (h = 0; s1[h] != '\0'; h++)
		;

	for (i = 0, l = 0; i < (h + n); i++)
	{
		if (i < h)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[l++];
	}
	ptr[i] = '\0';

	return (ptr);
}
