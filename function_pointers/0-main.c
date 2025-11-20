#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * main - tests the print_name function
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Nael", print_name_as_is);
	return (0);
}
