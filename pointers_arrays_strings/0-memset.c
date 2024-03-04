#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the s memory area
 * @b: char b
 * @n: first n bytes of the memory area pointed by s
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
