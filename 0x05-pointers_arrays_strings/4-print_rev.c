#include "main.h"
/**
*print_rev - prints a string, followed by a new line, to stdout.
*@s: pointer
*/
void print_rev(char *s)
{
	char c = *s;

	while (c != '\0')
		c = *++s;
	while (c != *s)
	{
		c = *--s;
		_putchar(c);
	}
	c = *s;
	_putchar(c);
	_putchar('\n');
}
