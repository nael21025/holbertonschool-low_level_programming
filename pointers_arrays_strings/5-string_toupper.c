#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: pointer to the string
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}
