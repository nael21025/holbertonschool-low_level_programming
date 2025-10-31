#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		start++;
		s--;
	}
}
