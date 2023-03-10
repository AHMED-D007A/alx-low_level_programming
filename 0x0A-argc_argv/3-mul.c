#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - multiplies two numbers.
*@argc: the number of ther numbers
*@argv: the numbers
*Return: 0
*/
int main(int argc, char **argv)
{
	int multi;

	if (argv[1] && argv[2])
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
