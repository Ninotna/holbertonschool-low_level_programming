#include <stdio.h>
/**
 * Fizz Buzz test - function that prints a square, followed by a new line.
 * Return: print square
 */

void fizz_buzz(void)
{
	for (i = 0; i <= 100; ++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
}
