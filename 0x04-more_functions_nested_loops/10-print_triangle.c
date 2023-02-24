#include "main.h"

/**
 * print_triangle - print diagonal line of length @n lines
 * @size: the number of lines that contains the diagonal
 * Return: void
 */
void print_triangel(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\n');
	}
}
