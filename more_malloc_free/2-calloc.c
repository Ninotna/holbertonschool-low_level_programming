#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - a function that allocates memory for an array, using malloc.
* @nmemb: nmember in an array
* @size: size of each member in byte
* Return: pointer to the alloc memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

int *p;
unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

p = malloc(nmemb * sizeof(char));

if (p == NULL)
{
	return (NULL);
}

for (i = 0; i < nmemb; i++)
{
	p[i] = 0;
}

return (p);
}
