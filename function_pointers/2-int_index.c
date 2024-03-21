#include "function_pointers.h"
/**
* int_index - a function that searches for an integer.
* @array: array to be used by the function
* @size: size of the array
* @cmp: function pointer casted to int pointer
* Return: int (o || 1 || -1)
*/

int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size == 0 || array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; ++i)
{
	if (cmp(array[i]))
		return (i);
}

	return (-1);
}

