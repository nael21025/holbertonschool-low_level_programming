#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;
	while (*s != '\0')
	{
		if (*s == '-' && !found_digit)
			sign = -sign;
		else if (*s == '+' && !found_digit)
			;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
			break;
		s++;
	}
	return sign * result;
}
