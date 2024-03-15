#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: unsigned int
*Return: pointer to the alloc memory
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b * sizeof(int));

	return (p);

}
