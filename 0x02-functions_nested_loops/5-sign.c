#include "main.h"
#include <stdio.h>
/**
*print_sign - print the sign of any number
*@c: the number used for checking
*Return: 1 if positive
*Return: 0 if zero
*Return: -1 if negative
*/
int print_sign(int c)
{
	int r = (c > 0) ? 1 : (c < 0) ? -1 : 0;

	if (r == 1)
	{
		_putchar('+');
	}
	else if (r == -1)
	{
	 	_putchar('-');
	}
	else
	{
		_putchar('0');
	}

	return (r);
}
