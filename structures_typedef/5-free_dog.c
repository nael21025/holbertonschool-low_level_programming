#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t
 * @d: pointer to dog_t to free
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
