#include <stdlib.h>
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, l, *ptr;

	if (min > max)
		return (NULL);

	i = max - min + 1;
	ptr = malloc(i * sizeof(int))

	if (ptr == NULL)
		return (NULL);

	for (l = 0; min <= max; i++, min++)
		p[i] = min;

	return (ptr);
}
