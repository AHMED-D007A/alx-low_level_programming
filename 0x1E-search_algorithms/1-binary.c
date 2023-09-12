#include "search_algos.h"

/**
 * _binary_search - recursive binary search function.
 * @array: the given array to search in.
 * @value: the given value to search for.
 * @first: the index of the first element in the array.
 * @last: the last index of the last element in the array.
 * Return: the index of the given value on success otherwise -1.
*/
int _binary_search(int *array, int value, size_t first, size_t last)
{
	size_t i, mid = first + (last - first) / 2;

	printf("Searching in array: %d", array[first]);
	for (i = first + 1; i <= last; i++)
		printf(", %d", array[i]);
	putchar('\n');
	if (array[mid] == value)
		return (mid);
	else if (first >= last)
		return (-1);
	else if (array[mid] > value)
		return (_binary_search(array, value, first, mid - 1));
	else
		return (_binary_search(array, value, mid + 1, last));
}

/**
 * binary_search - binary search function.
 * @array: the given array to search in.
 * @value: the given value to search for.
 * @size: the size of the array
 * Return: the index of the given value on success otherwise -1.
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (_binary_search(array, value, 0, size - 1));
}
