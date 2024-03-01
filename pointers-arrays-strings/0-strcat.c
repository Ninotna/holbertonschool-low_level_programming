#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to the dest str
 * @src: pointer to the src str
 * @n: max str length
 * Return: S1
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

while (i <= n)
{
	dest[i] = src[i];
	i++;
}

return (dest);
}
