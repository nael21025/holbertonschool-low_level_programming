#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer to new string, or NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
