#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @i : integer
 * Return: last digit
 */

int print_last_digit(int i)
{
	i = i % 10;
	_putchar(i % 10 + '0');
	return (i);
}


