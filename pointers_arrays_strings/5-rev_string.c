#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to the character array.
 * Return: a string
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i = length - 1;
	int j;
	char r[100];

	while (i >= 0)
	{
		r[j] = s[i]
		i--;
		j++;
	}
	_putchar('\n');
}
