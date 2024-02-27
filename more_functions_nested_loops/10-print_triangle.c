#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 * print a triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size - 1; col++)
			{
				_putchar(' ');
			}
			for (col = 1; col <= size; col++)
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
