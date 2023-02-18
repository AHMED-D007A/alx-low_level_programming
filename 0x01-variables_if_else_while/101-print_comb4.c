#include <stdio.h>
/**
*main - main block
*Return: 0
*/
int main(void)
{
	int i = 2;
	int l = 1;
	int n = 0;

	while (n < 8)
	{
		l = n + 1;
		while (l < 9)
		{
			i = l + 1;
			while (i < 10)
			{
				putchar(n + '0');
				putchar(l + '0');
				putchar(i + '0');
				if (n == 7 && l == 8 && i == 9)
					break;
				putchar(',');
				putchar(' ');
				i++;
			}
			l++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
