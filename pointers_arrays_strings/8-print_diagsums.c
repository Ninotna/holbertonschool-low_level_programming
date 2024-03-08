#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: the pointer to the matrix of integers
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Sum for the primary diagonal */
		sum1 += a[i * size + i];

		/* Sum for the secondary diagonal */
		sum2 += a[i * size + (size - i - 1)];
	}

	/* Adjust for the center element in case of an odd-sized matrix */
	if (size % 2 == 1)
	{
		sum1 -= a[size / 2 * size + size / 2];
	}

	printf("%d, %d\n", sum1, sum2);
}
