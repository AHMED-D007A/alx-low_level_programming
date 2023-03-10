#include <stdio.h>
/**
*main - prints the name of the program
*@argc: the number of the arguments
*@argv: the list of the arguments
*Return: 0
*/
int main(int argc, char **argv[])
{
	printf("%s", *argv);
	return (0);
}
