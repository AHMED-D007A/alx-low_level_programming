#include "main.h"
/**
*is_prime_number -  returns 1 if the input integer is a prime numbe
*@n: the number
*Return:  returns 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	int sqr = _sqrt_recursion(n);

	if (n <= 0 || n == 1)
		return (0);
	else if (n % sqr == 0)
		return (0);
	else
		return (1);
}
