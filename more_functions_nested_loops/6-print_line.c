#include "main.h"
/**
 * print_line - prints 10 times the numbers, from 0 to 14, followed by \\n
 * @n: number of _
 * Return: print most numbers
 */

void print_line(int n)
{
	int n;

	while (n > 0)
	{
		_putchar(95 + '0');
		(n<= 0) ? _putchar('\n') : n--;
	}

}

