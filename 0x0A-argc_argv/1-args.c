#include <stdio.h>
/**
*main - print the number of argumens
*@argc: the number of the argumrnts
*@argv: the arguments
*Return: 0
*/
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
