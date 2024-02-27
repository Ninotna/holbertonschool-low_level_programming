#include <stdio.h>
#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 * print a triangle
 */
void print_triangle(int size)
{
	int row, col, col2;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col2 = 1; col2 <= size - row; col2++)
			{
				_putchar(' ');
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
