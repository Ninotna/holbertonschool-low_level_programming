#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer to the string to convert
 * Return: the converted string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
