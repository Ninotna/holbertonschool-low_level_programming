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

for (buffer_s = 0; buffer_s < max; buffer_s++)
;

p = malloc(buffer_s * sizeof(char));

if (min > max || p == NULL)
{
	return (NULL);
}

return (p);
}
