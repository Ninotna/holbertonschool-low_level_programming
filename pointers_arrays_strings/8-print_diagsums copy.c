#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - prints the sum of 
 * the two diagonals of a square matrix of integers.
 * @a: the point to the matrix of integers
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i , j, sum;

for (i = 0; i < size; i++)
{
    for(j = 0; j < size; j++)
    {
        if (i == j)
        {
            sum += (*a)[i * size + j];  /* Dereference a to get the array, then calculate offset */
        }
    }
}
printf("%d", sum);

}
