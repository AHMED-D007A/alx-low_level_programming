#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isdigits - check if string is a digit characters only
 * @s: the reference to a character
 * Return: 1 if @s reference to cstring otherwise returns 0
 */
int isdigits(char *s)
{
	for (; *s; s++)
		if (!isdigit(*s))
			return (0);
	return (1);
}

/**
 * main - prints the sum of all arguments
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c, l, sum = 0;

	for (l = 1; l < argc; l++)
	{
		char *arg = *(argv + l);

		if (!isdigits(arg))
		{
			puts("Error");
			exit(1);
		}

		c = atoi(arg);
		sum += c;
	}

	printf("%d\n", sum);
	return (0);
}
