#include "main.h"
/**
 * print_line - prints 10 times the numbers, from 0 to 14, followed by \\n
 * @n: number of _
 * Return: print most numbers
 */

void print_line(int n)
{
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			while (n > 0)
			{
				_putchar('_');
				n--;
			}
			_putchar('\n');
	}
}

