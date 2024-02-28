#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to the character array.
 * Return: a string
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
		i = length - 1;
		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}
		_putchar('\n');
	}
}
