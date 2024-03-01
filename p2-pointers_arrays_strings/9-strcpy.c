#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: pointer to the character dest
 * @src: pointer to the char src
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}
