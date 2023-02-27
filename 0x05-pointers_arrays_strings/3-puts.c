#include "main.h"
/**
*_puts - prints a string, followed by a new line, to stdout.
*@str: pointer
*/
void _puts(char *str)
{
	char c;

	while (c != '\0')
	{
		_putchar(c);
		c = *++str;
	}
	_putchar('\n');
}
