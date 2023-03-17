#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - get the lenth of a string
 * @s: the string
 * Return: thr lenth
*/
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
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
	unsigned int l, i, strlen;

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen = _strlen(s1);
	ptr = malloc((n + strlen + 1) * sizeof(char));

	for (i = 0; s[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (l = 0; l < n; l++)
		ptr[i++] = s2[l];
	ptr[i] = '\0';

	return (ptr);
}
