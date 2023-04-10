#include "main.h"
/**
 * print_binary - convert a decimal to a binary.
 * @n: the given decimal number.
 * Return: nothing.
*/

void print_binary(unsigned long int n)
{
	int i, arr[64];

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 0; n != 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}

	i--;

	for ( ; i >= 0; i--)
		printf("%d", arr[i]);
}
