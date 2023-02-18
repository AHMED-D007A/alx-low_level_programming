#include <stdio.h>
/**
*main - main block
*Write a program that prints all possible combinations of single-digit numbers.
*Return: 0
*/
int main(void)
{
	int i = 1;
	int l = 0;

	while (l < 9)
	{
		i = l + 1;
		while (i < 10)
		{
			putchar(l + '0');
			putchar(i + '0');
			if (l == 8 && i == 9)
				break;
			putchar(',');
			putchar(' ');
			i++;
		}
		l++;
	}
	putchar('\n');

	return (0);
}
