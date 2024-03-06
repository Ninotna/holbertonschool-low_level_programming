#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer to the string to convert
 * Return: the converted string.
 */

void _puts_recursion(char *s)
{
	int i = 0;

while (s[i] != '\0')
{
	_putchar(s[i]);
i++;
}
}
