#include <stdio.h>

/**
 * main - function main random
 *
 * Return: 0
 */

int main(void)
{
	int car; /* car for character*/

	for (car = 'a'; car <= 'z'; car++)
	{
	putchar(car);
	}
	putchar('\n');
	for (car = 'A'; car <= 'Z'; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
