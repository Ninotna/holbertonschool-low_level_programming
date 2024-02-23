#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function prints all natural numbers from n to 98
 * @n : integer
 * Return: n to 98
 */
void print_to_98(int n)
{
	for (; n <= 98 ; n++)
	{
		printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
	}
	putchar('\n');
}
