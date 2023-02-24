#include "main.h"

/**
 * print_triangle - print diagonal line of length @n lines
 * @size: the number of lines that contains the diagonal
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
			_putchar(' ');
		for (l = 0; l < (i + 1); l++)
			_putchar('#');
		_putchar('\n');
	}
}
