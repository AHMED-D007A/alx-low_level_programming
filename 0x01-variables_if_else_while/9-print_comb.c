#include <stdio.h>
/**
*main - main block
*Write a program that prints all possible combinations of single-digit numbers.
*Return: 0
*/
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
