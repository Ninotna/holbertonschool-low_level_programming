#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: integer
 * Return: 1 (+), -1 (-) or 0 (null)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		else (n == 0)
	{
		_putchar('0');
		return (0);
	}
}

