#include <stdio.h>
/**
*main - main block
*A program that prints the alphabet in lowercase, followed by a new line.
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'e'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'd'; ch < 'q'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'r'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
