#include "hash_tables.h"

/**
 * key_index - gives the index of a key in the array of a hash table
 * @key: key, string
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
