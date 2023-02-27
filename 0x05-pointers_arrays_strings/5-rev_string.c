#include "main.h"

/**
 * rev_string - reverse string
 * @s: the reference to the string
 */
void rev_string(char *s)
{
	int len = 0, h, mid;
	char c = *s;

	while (c != '\0')
		c = *(s + ++len);

	if (len == 0)
		return;

	mid = len / 2;

	for (i = 0; h < mid; h++)
	{
		char tmp;
		int a = len - h - 1;

		tmp = *(s + h);
		*(s + h) = *(s + a);
		*(s + a) = tmp;
	}
}
