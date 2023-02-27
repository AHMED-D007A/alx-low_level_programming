#include "main.h"
/**
*strlen - returns the length of a string.
*@s: the pointer
*/
int _strlen(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *++s;
		i++;
	}

	return (i);
}
