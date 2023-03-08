#include "main.h"
/**
*factorial - factorial of a given number.
*@n: the given number
*Return: -1 if less than 0 , and the factorial if equal or bigger than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (n * factorial(n - 1));
}
