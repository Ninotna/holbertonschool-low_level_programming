#include "main.h"
#include <stdio.h>

/**
 * puts2 - function prints every character (str), starting with the 1st
 * @str: pointer to the character array.
 * Return: a string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

