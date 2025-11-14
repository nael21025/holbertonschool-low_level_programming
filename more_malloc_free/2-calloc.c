#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element (in bytes)
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* attention: possible overflow, mais non demandé dans le projet */
	total = nmemb * size;

	p = malloc(total);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		p[i] = 0;

	return ((void *)p);
}
