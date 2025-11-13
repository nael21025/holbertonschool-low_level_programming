#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with c
 * @size: size of array
 * @c: char to fill array with
 * Return: pointer to array, or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
