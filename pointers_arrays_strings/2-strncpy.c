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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
