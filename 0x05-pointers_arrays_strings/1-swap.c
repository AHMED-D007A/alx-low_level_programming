#include "main.h"
/**
*swap_int - swaps the value of two integers
*@a: first pointer
*@b: second pointer
*/
void swap_int(int *a, int *b)
{
	int *swap;

	**swap = &a;
	**a = &b;
	**b = &swap;
}
