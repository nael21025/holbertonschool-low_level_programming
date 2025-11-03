#include "main.h"

/**
 * _memset - fills memory with a byte
 * @s: memory
 * @b: byte
 * @n: size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
