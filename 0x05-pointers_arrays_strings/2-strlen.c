#include "main.h"
/**
*strlen - returns the length of a string.
*@s: the pointer
*/
int _strlen(char *s)
{
	int i = 0;
	char arr[] = *s;

	while (arr[i] != '\0')
		i++;

	return (i);
}
