#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string.
 * @dest: pointer to the dest str
 * @src: pointer to the src str
 * @n: max str length
 * Return: S1
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];

	if (i > n)
	{
	dest[i] = '\0';
	}
	i++;
	}
	return (dest);
}
