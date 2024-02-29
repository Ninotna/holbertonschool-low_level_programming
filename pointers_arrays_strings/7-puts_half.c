#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: pointer to the character array.
 * Return: a string
 */

void puts_half(char str[])
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start_index = (length + 1) / 2;

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}
