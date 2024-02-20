#include <stdio.h>

/**
 * main - function main random
 *
 * Return: 0
 */

int main(void)
{
	int car;

	for (car = 'z'; car >= 'a'; car--)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
