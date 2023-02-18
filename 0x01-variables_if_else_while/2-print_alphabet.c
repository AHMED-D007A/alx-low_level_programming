#include <stdio.h>
/**
*main - main block
*A program that prints the alphabet in lowercase, followed by a new line.
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
