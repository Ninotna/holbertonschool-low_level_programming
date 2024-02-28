#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse, followed by \\n
 * @s: pointer to the character array.
 * Return: a string
 */

void print_rev(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

