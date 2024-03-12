#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse, followed by \\n
 * @s: pointer to the character array.
 * Return: a string
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

