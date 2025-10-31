#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*str != '\0')
	{
		if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		capitalize = (*str == ' ' || *str == '\t' || *str == '\n' ||
				*str == ',' || *str == ';' || *str == '.' ||
				*str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{' ||
				*str == '}');
		str++;
	}
	return (ptr);
}
