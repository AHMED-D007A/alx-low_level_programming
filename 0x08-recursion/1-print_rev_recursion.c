#include "main.h"
/**
*_puts_rev_recursion - prints a string, followed by a new line
*@s: the pointer that point to the string
*/
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_puts_rev_recursion(s++);
		_putchar(*s);
	}
}
