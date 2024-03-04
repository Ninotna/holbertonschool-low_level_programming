#include "main.h"
#include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: pointer to character string
 * @c: character to find
 * Return: *res
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ((*s == c) ? s : NULL);
}
