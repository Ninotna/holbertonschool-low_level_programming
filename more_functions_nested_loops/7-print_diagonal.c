#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of \\
 * Return: print diagonal
 */

void print_diagonal(int n)
{
	while (n >= 0)
	{
		if (n <= 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			for (; n >= 0; n--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

