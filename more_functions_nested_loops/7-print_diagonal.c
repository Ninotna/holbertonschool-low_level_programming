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
		for (; n > 0; n--)
		{
			_putchar(32 + '0');
		}
		_putchar('\\');
		_putchar('\n');
		if (n <= 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}

