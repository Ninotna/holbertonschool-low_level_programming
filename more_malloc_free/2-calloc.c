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
	char *p;

	unsigned int i, total_size;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total allocation size */
	total_size = size * nmemb;

	/* Allocate memory */
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	for (i = 0; i < total_size; i++)
	{
		p[i] = 0;
	}

	return ((void *)p);
}
