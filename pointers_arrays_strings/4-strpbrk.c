#include "main.h"

/**
 * _strpbrk - first occurrence in s of any byte in accept
 * @s: string
 * @accept: bytes
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
