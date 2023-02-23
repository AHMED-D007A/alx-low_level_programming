#include "main.h"
#include <stdio.h>
/**
*print_last_digit - print the last digit of a given number
*@n: the given number
*Return: 0
*/
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar(ld + '0');

	return (ld);
}
