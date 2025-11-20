#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name string
 * @f: pointer to a function that takes a char * and returns nothing
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to the function to use on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer using a comparison function
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first matching element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int));

int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
