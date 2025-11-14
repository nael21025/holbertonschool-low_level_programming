#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
		return;

	if (d->name == NULL)
		name = "(nil)";
	else
		name = d->name;

	if (d->owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;

	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
