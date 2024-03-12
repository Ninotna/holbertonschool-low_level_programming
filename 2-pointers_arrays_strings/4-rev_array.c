#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* 1 boucle en inversant les éléments depuis les deux extrémités */
	for (i = 0; i < n / 2; i++)
	{
		/* Échanger les éléments a[i] et a[n - i - 1] */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
