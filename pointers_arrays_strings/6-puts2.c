#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints every other character of a string, starting with the 1st character.
 * @s: pointer to the character array.
 * Return: a string
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

