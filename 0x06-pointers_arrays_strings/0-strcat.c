#include "main.h"
/**
* _strcat - concatenates two strings.
* @dest: first string
* @src: second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	dest[i] = ' ';

	for (c = 0; src[c] != '\0'; c++)
	{
		i++;
		dest[i] = src[c];
	}

	i++;
	dest[i] = '\0';

	return (dest);
}
