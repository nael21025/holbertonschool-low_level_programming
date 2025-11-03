#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums diagonals of square matrix
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%u, %u\n", sum1, sum2);
}
