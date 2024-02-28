#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse, followed by \\n
 * @s: pointer to the character array.
 * Return: a string
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

