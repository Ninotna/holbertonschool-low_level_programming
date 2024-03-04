#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: pointer to dest mem area
 * @src: pointer to source mem area
 * @n: first n bytes of the memory area pointed by s
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
