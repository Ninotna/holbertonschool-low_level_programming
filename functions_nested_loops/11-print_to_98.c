#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function prints all natural numbers from n to 98
 * @n : integer
 * Return: n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98 ; n++)
		{
			printf("%d", n);
				if (n < 98)
				{
					printf(", ");
				}
		}
	}
	else
	{
		for (n = n; n > 98 ; n--)
		{
			printf("%d, ", n);
			printf("%d", 98);
		}
	}
		putchar('\n');
}
