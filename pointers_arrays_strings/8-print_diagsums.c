#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums diagonals of square matrix
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	long int sum1 = 0;
	long int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
