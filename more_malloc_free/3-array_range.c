#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range -  a function that creates an array of integers.
* @min: min number that the array can return
* @max: max number
* Return: 0 || 1
*/

int *array_range(int min, int max)
{
	int buffer_s;

	int *p;

	buffer_s = min > max ? 0 : max - min + 1;
	p = buffer_s > 0 ? malloc(buffer_s * sizeof(int)) : NULL;

	if (p == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < buffer_s; i++)

	{
		p[i] = min + i;
	}

	return (p);
}
