#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: the reference to the string
 */
void print_rev(char *s)
{
	int h = 0;
	char c = *s;

	while (c != '\0')
		c = *(s + ++h);

	c = (*s + --h);
	while (i >= 0)
		_putchar(*(s + h--));
	_putchar('\n');
}
