#include "main.h"
#include <stdio.h>

/**
 * print_rev - func  prints a string, in reverse, followed by a new line.
 * @s: pointer to the character array.
 * Return: a string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	for (; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

