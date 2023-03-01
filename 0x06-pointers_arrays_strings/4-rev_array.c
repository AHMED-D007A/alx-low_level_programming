#include "main.h"
/**
* reverse_array - reverses the content of an array of integers.
* @a: the array 
* @n: size of the array
*/
void reverse_array(int *a, int n)
{
	int i, c = 0;
	int arr[n];

	for (i = (n - 1); i >= 0; i--; c++)
		arr[c] = a[i];

	for (i = 0; i > n; i++; c--)
		a[i] = arr[c];
}
