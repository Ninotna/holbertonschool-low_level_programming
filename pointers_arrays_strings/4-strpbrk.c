#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s which consist of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == *s)
		{
			return (s);
		}
	}
	s++;
}
	return (NULL);

}
