#include "main.h"
/**
*rev_string - reverses a string.
*@s: the pointer that point to the string
*/
void rev_string(char *s)
{
	char c = *s;
	int i = 0;

	while (c != '\0')
	{
		c = (*(s + ++i));
	}

	char arr[];

	--i;
	while (i >= 0)
	{
		arr[] = (*(s + i--));
	}
	char *s = arr[];
}
