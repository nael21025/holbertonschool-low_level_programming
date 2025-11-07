#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count (unused)
 * @argv: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;²
	(void)ac;
	
	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
