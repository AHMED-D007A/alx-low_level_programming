#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: the lenth of the diagonal
*/
void print_diagonal(int n);
{
	int i, f;

	if (n > 0)
	{
		for (f = 0; f < n; f++)
		{
			for (i = 0; i < f; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
