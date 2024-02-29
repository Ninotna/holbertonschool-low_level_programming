#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: pointer to the character array.
 * Return: a string
 */

void puts_half(char *str)
{
	int i = 0;
    int len = strlen(str);

	while (str[i] != '\0')
	{
		if (i <= len / 2)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

