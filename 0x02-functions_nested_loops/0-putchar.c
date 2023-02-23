#include <stdio.h>
#include "main.h"
/**
*main - main block
*Return: 0
*/
int main(void)
{
	int i;
	char *m = "_putchar";

	for (i = 0; i < 8; i++)
	{
	_putchar(m[i]);
	}
	_putchar('\n');

	return (0);
}
