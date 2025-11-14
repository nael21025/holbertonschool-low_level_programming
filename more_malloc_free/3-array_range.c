#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to newly allocated array,
 *         or NULL on error
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min + i;

	return (a);
}
