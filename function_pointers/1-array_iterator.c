#include "function_pointers.h"
/**
	* array_iterator - a function that executes a function given
	*  as a parameter on each element of an array.
	* @array: array to be used by the function
	* @size: size of the array
	* @action: function pointer casted to int pointer
	*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
		if (array && action)
		{
			for (size_t i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
}

