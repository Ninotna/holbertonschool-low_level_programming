#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function prints n elements of an array of integers + \\n
 * @a: pointer to the character array.
 * @n: index of the array
 * Return: a string
 */

void print_array(int *a, int n)
{
	int i = 0;
	int d;

	while (i <= n - 1)
	{
		d = a[i];
		printf("%d", d);
		if (i <= (n - 2))
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
}
