#include "main.h"

/**
 * _strspn - length of initial segment of s in accept
 * @s: string
 * @accept: accepted bytes
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (count);
		count++;
	}
	return (count);
}
