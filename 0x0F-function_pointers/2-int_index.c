#include <stdio.h>
#include <stddef.h>
/**
 * int_index - a function that searches for an integer.
 * @array: the given array
 * @size: the size of the array
 * @cmp: pointer function that checks for the conditions
 * Return: 0 , 1 and the index if the condition accepted
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
