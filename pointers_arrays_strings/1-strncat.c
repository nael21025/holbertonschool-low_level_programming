#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to use from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
