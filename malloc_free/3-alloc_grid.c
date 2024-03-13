#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - a function that returns
* a pointer to a 2 dimensional array of integers.
* @width: width
* @height: height
* Return: int
*/

int **alloc_grid(int width, int height)
{
	int i;

	int **grid = (int **)calloc(height, sizeof(int *));

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}

for (i = 0; i < height; i++)
{

	grid[i] = (int *)calloc(width, sizeof(int));
}

return (grid);

}
