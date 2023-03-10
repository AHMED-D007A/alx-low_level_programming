#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - main block
*@argc: number of arguments
*@argv: grgument
*Return: 0
*/
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
			return (0);
		else if (isdigit(atoi(argv[i])))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d", sum);

	return (0);
}
